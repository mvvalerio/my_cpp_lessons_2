#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Marvel{

    string b = "batman";
    string s = "spiderman";
    string h = "hulk";
    string i = "ironman";
    string w = "wonderwoman";

};

Marvel escolha;

void joguin(){

    string personagem;
    string entrada;
    bool acertou = false;

    srand(time(NULL));

    int gera = rand() % 5;
    if(gera == 0) personagem = escolha.b;
    else if(gera == 1) personagem = escolha.s;
    else if(gera == 2) personagem = escolha.h;
    else if(gera == 3) personagem = escolha.i;
    else personagem = escolha.w;

    string linhas(personagem.size(), '_');

    while(linhas != personagem){

        cout << "\nPersonagem: " << linhas << endl;
        cout << "Coloque uma letra ou o nome completo: ";
        cin >> entrada;
        
        system("clear");
    
        if(entrada == personagem){
        
            linhas = personagem;
            break;
        
        }
    
        if(entrada.size() == 1){
        
            char letra = entrada[0];
            acertou = false;
    
            for(size_t i = 0; i < personagem.size(); i++){
        
                if(personagem[i] == letra){
            
                    linhas[i] = letra;
                    acertou = true;
            
                }
            }

            if(!acertou){
        
                cout << "\nErrou ! Outra letra" << endl;
        
            } else {
        
                cout << "Acertou uma letra. Continue assim !" << endl;
        
            }
        
        } else {
        
        cout << "Nome Incorreto !" << endl;
        
        }
    }
    
    system("clear");
    
    cout << "PARABÉNS ! Acertou o nome do personagem: " << personagem << endl;

}


int main(){

    joguin();

    return 0;
 }
