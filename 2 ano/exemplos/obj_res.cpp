#include <iostream>

using namespace std;


struct Hardware{
    string ram;
    string gpu;
    string cpu;
    string psu;
    string casee;
    string motherboard;
    string hdd;
    string fans;
    char periferals[5];
};

class Computer{

    private:

    Hardware computer;
    bool state;

    void format(){
        cout << "Computer is formating !" << endl;
    }

    void openFolder(){
        cout << "Opening Folder !" << endl;
    }

    void startOS(){
        cout << "Starting Operative Sistem !" << endl;
    }

    void startGPU(){
        cout << "Starting Grafics Process Unit !" << endl;
    }

    void removeFiles(){
        cout << "Removing Files !" << endl;
    }

    void hardwareList(){

        cout << endl;
        cout << "Computer Hardware: " << endl;
        cout << "RAM: " << computer.ram << endl;
        cout << "GPU: " << computer.gpu << endl;
        cout << "CPU: " << computer.cpu << endl;
        cout << "PSU: " << computer.psu << endl;
        cout << "Case: " << computer.casee << endl;
        cout << "MotherBoard: " << computer.motherboard << endl;
        cout << "Disk: " << computer.hdd << endl;
        cout << "Fans: " << computer.fans << endl;

        cout << "Periferals: ";
        for(int x = 0; x < 5; x++){

            cout << computer.periferals[x] << " ";
        }

        cout << endl;
        cout << endl;

    }


    public:

    Computer(Hardware hardware){

        this->computer = hardware;
        this->state = false;
    
        cout << "Computer has been instantiated succesfully !" << endl;
    }

    void turnON(){

        if(state){
            cout << "Computer is ON !" << endl;
        } else{
            cout << "Computer is turning ON !" << endl;
            this-> state = true;
        }

    }

    void turnOFF(){

        if(state){
            cout << "Computer is turning OFF !" << endl;
            this-> state = false;
        } else{
            cout << "Computer is turned OFF !" << endl;
        }

    }

    void reset(){

        if(state){
            cout << "Computer has been reseted !" << endl;
        } else{
            cout << "Computer is not ON !" << endl;
        }

    }

    void openCase(){
        cout << "Computer case has been opened !" << endl;
    }

    void execute(int opt){

        switch(opt){
            case 1:
            if(state){
                format();
            } else{
                cout << "Computer is not turned ON !" << endl;
            }
            break;

            case 2:
            if(state){
                openFolder();
            } else{
                cout << "Computer is not turned ON !" << endl;
            }
            break;

            case 3:
            if(state){
                removeFiles();
            } else{
                cout << "Computer is not turned ON !" << endl;
            }
            break;

            default:
                cout << "Invalid Option !" << endl;
            break;

        }

    }

    void input(string input){
        if(state){
            cout << "Computer is receiving your input: " << endl;
        } else{
            cout << "Coputer is not turned ON !" << endl;
        }
    }

};


int main(){

    system("clear");

    Hardware hardware1 = {"32 GB", "RTX 4090", "Ryzen 9 7600X", "Corsair FUW 2000W", "ASUS HK-410B", "10 TB HDD", "6x Corsair O-322", "NZXT BITER LX900", {'M', 'J', 'L', 'R', 'K'}};

    Computer computer1(hardware1);

    return 0;
}