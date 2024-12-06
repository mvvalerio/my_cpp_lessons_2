#include <iostream>

using namespace std;

float x1, x2, y1, y2;

int main(){
    system("clear");

    cout << "introduza os valores para X e Y !" << endl;
    cout << "\nx1: ";
    cin >> x1; 
    cout << "x2: ";
    cin >> x2; 
    cout << "y1: ";
    cin >> y1;
    cout << "y2: ";
    cin >> y2;

    cout << "\nEquação X = " << (x1+x2) / 2 << endl;
    cout << "Equação Y = " << (y1+y2) / 2 << endl;

    return 0;
}