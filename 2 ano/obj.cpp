#include <iostream>

using namespace std;


struct Hardware{

    string RAM;
    string GPU;
    string CPU;
    string PSU;
    string motherBoard;
    string HDD;
    string externalDevices;
    string fans;
    string Case;

};


class Computer{

private:

    void format(){



    }


    void openFolders(){



    }


    int OS;
    int GPU;


    void removeFolders(){



    }


    void hardware(){

        Hardware h;

        cout << h.RAM <<
                h.GPU <<
                h.CPU <<
                h.PSU <<
                h.motherBoard <<
                h.HDD <<
                h.externalDevices <<
                h.fans <<
                h.Case << endl;

    }

public:

    Computer(){

        if(OS == 0){

            cout << "Operative Sistem: OFF" << endl;

        } else if(OS == 1){

            this-> OS = OS;
            cout << "Operative Sistem: ON" << endl;

        } else {

            cout << "ERROR OS 420: Choose between 0 = OFF and 1 = ON !" << endl;

        }


        if(GPU == 0){

            cout << "Operative Sistem: OFF" << endl;

        } else if(GPU == 1){

            this-> GPU = GPU;
            cout << "Grafics Process Unit: ON" << endl;

        } else {

            cout << endl;

            cout << "ERROR GPU 420: Choose between 0 = OFF and 1 = ON !" << endl;

        }

    }


    void turnOn(){



    }


    void turnOff(){



    }
    

    void reset(){



    }
    

    void openCase(){



    }
    

    void execute(){



    }
    

    void input(){



    }

};


int main(){

    system("clear");

    Hardware hardware1 = {"32 GB", "RTX 4090", "Ryzen 9 7600X", "Corsair FUW 2000W", "ASUS HK-410B", "10 TB HDD", "M, K, H, Monitor", "6x Corsair O-322", "NZXT BITER LX900"};

    Computer pc1();

    

    return 0;
}