#include <iostream>

using namespace std;

class RobotPemadam{
    private:
        int jarak;
        string status;

    public:
        void inputSensor(int inputJarak){
            jarak = inputJarak;
        }

        void prosesLogika(){
            if (jarak > 20){
                status = "Maju Mencari Api";
            }
            else if (jarak <= 20 && jarak > 5){
                status = "UDAH DEKET NIH BRAY";
            }
            else if (jarak <= 5){
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }

        void cetakStatus(){
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
        }
};

int main(){
    RobotPemadam robot;
    int inputJarak;

    while (true){
        cin >> inputJarak;

        if (inputJarak == 67){
            break;
        }

        robot.inputSensor(inputJarak);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}