#include <iostream>

using namespace std;


class Fanta{

    private:

    bool content;
    int mL;
    string gas;


    void exitGas(){

        if(can == 1){

            cout << "TSSSSSS" << endl;

        }

    }

    public:
    
    bool lid;
    bool can;
    string tab;
    string const CANNAME = "Pineapple Fanta = ";
    string const INGREDIENTS = "Pineapple, Water, 0% Sugar, Yellow Color Die, ";
    double const PRICE = 0.79; 


    Fanta(int mL){

        this-> mL = mL;
        this-> can = false;

        cout << CANNAME << PRICE << "€: " << INGREDIENTS << mL << " mL" << endl;

    }


    void canStatus(bool ft){

        if(ft == 0){

            cout << endl;
            cout << "Can is Closed !" << endl;
            can == 0;

        } else if(ft == 1){

            cout << endl;
            cout << "Can is Open !" << endl;
            can == 1;
            exitGas();

        }

    }


    void pourContent(){



    }


    void drinkContent(){



    }


    void openCan(){

        bool option;

        cout << endl;

        cout << "Would you like to open your Fanta ?" << endl;
        cout << "Option (Yes = 1 ; No = 0): ";
        cin >> option;

        if(option){

            canStatus(1);

        } else if(!option){

            canStatus(0);

        }

    }


    void crushCan(){


    }


    void cutCan(){



    }

};


int main(){

    system("clear");

    Fanta f1(330);
    f1.openCan();

    return 0;
}