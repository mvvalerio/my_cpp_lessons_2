#include <iostream>
#include <vector>
#include <map>

using namespace std;


vector <int> nums = {6, 2, 9, 1, 7}; // obrigatorio levar "vector" e os "<>" para o tipo de variavel

map <string, int> mapa = {
   
    {"um", 1},
    {"dois", 2},
    {"tres", 3},
    {"quatro", 4},
    {"cinco", 5},
    {"seis", 6},
    {"sete", 7},
    {"oito", 8},
    {"nove", 9},
    {"dez", 10},

};

int main(){

    cout << mapa["um"] << endl;


    // for(int num : nums){
    //     cout << num << endl;
    // }


    return 0;
}