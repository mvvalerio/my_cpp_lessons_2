#include <iostream>
#include <iomanip>

using namespace std;

int quantnums = 0;
int setnum = 0;

int main(){

    system("clear");
    
    cout << "Insira o número que deseja multiplicar: ";
    cin >> quantnums;
    
    cout << "\nE o espaço entre eles: ";
    cin >> setnum;
    
    system("clear");
    
    cout << "Número multiplicado: " << quantnums;
    cout << "\t\tEspaço entre números: " << setnum;
    
    for(int x = 1; x <= quantnums; x++){
        cout << setw(setnum) << endl;
        for(int y = 1; y <= quantnums; y++){
            cout << y*x;
            cout << setw(setnum);
        }
    }
    
    cout << endl;

    return 0;
}