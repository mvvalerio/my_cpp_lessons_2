#include <iostream>
#include <fstream>

using namespace std;


int main(){

    system("clear");

    string ficheiro;

    cout << "Insira o nome do ficheiro incluindo depois do ponto !" << endl;
    cin >> ficheiro;

    try{

        ifstream nome(ficheiro);

        if(!nome.is_open()){
            throw "O ficheiro não foi encontrado !";
        }
        throw "O ficheiro foi aberto !";

    }catch(const char* e){ // "e" é o "nome" do erro, costuma a ser numero, e esta a buscar na memoria para a poupar
        cout << e << endl;
    }

    return 0;
}