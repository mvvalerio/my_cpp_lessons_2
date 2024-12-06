#include <iostream>

using namespace std;


bool haspower = true;
bool pluggedin = true;
bool switchon = true;
bool fuseok = true;

int main(){
    system("clear");

    if(haspower = true){
        cout << "Seek for help\n";
    } else {
        if(pluggedin = true){
            if(switchon = true){
                if(fuseok = true){
                    cout << "Seek for help !\n";
                } else {
                    cout << "Replace the fuse !\n";
                }
            } else {
                cout << "Turn switch on !\n";
            }
        } else {
            cout << "Plug it in !\n";
        }
    }



    return 0;
}