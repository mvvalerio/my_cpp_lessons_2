#include <iostream>
#include <ctime>

using namespace std;

struct Marvel{

    string b = "batman";
    string s = "spiderman";
    string h = "hulk";
    string i = "ironman";
    string w = "wonderwoman";

};


Marvel escolha;

char cregisto;
string sregisto;

void joguin(){

    string personagem;

    srand(time(NULL));

    int gera = rand() % 5;
    if(gera == 0) personagem = escolha.b;
    else if(gera == 1) personagem = escolha.s;
    else if(gera == 1) personagem = escolha.h;
    else if(gera == 1) personagem = escolha.i;
    else personagem = escolha.w;

    string linhas(personagem.size(), '_');

    string entrada;
    bool acerta = false;

    while(personagem != linhas){



    }

}


int main(){

    joguin();

    return 0;
 }