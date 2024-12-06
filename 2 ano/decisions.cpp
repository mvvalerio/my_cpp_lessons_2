#include <iostream>

using namespace std;


int main(){
    system("clear");

    int x = 1;
    int y = 0;

    while(x <= 5){
        cout << x;
        cout << "\n Add more to the value: ";
        cin >> y;
        cout << x + y;
    }

    while(x > 5){
        cout << "Stopped !\n"; 
    }

    return 0;
}