#include <iostream>
#include <iomanip>

using namespace std;




void graficohorizontal(int x, int y, int z){

    system("clear");


    int maior = x;
    if(y > maior) maior = y;
    if(z > maior) maior = z;


    int a,b,c;
    a = x;
    b = y;
    c = z;


    x = x * 50 / maior;
    y = y * 50 / maior;
    z = z * 50 / maior;


    cout << "x: " << setw(2) << a << " ";
    for(int i = 0; i < x; i++) cout << "*";
    cout << endl;

    cout << "y: " << setw(2) << b << " ";
    for(int i = 0; i < y; i++) cout << "*";
    cout << endl;

    cout << "z: " << setw(2) << c << " ";
    for(int i = 0; i < z; i++) cout << "*";
    cout << endl;


    cout << endl;
}


int main(){

    graficohorizontal(100, 20, 300);
    
    return 0;
}