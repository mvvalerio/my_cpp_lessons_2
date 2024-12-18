#include <iostream>

using namespace std;


int tentativas = 1;

void header(){

    cout << "\t\tDado Eletrónico - No âmbito do módulo \n";
    cout << "\tProgramação c/c++ Estruturas básicas e Conceitos Fundamentais \n";
    cout << "\t\t\t      ENTA - 2024 \n\n\n\n";

}


void dado(){

    
    srand(time(NULL));
    int dado = rand()%6+1;

    if(dado == 1){

        cout << "\t\t\t\t   " << "" << "" << endl;
        cout << "\t\t\t\t   " << "*" << "" << endl;
        cout << "\t\t\t\t   " << "" << "" << endl;
        
    }

    if(dado == 2){

        cout << "\t\t\t\t   " << " " << "*" << endl;
        cout << "\t\t\t\t   " << " " << " " << endl;
        cout << "\t\t\t\t  *" << " " << " " << endl;
        
    }

    if(dado == 3){

        cout << "\t\t\t\t   " << " " << "*" << endl;
        cout << "\t\t\t\t   " << "*" << " " << endl;
        cout << "\t\t\t\t  *" << " " << " " << endl;
        
    }

    if(dado == 4){

        cout << "\t\t\t\t  *" << " " << "*" << endl;
        cout << "\t\t\t\t   " << " " << " " << endl;
        cout << "\t\t\t\t  *" << " " << "*" << endl;
        
    }

    if(dado == 5){

        cout << "\t\t\t\t  *" << " " << "*" << endl;
        cout << "\t\t\t\t   " << "*" << " " << endl;
        cout << "\t\t\t\t  *" << " " << "*" << endl;
        
    }

    if(dado == 6){

        cout << "\t\t\t\t  *" << " " << "*" << endl;
        cout << "\t\t\t\t  *" << " " << "*" << endl;
        cout << "\t\t\t\t  *" << " " << "*" << endl;
    
    }

    cout << endl;
    cout << endl;
    
}

void lancamentos(int tentativas){

    cout << "Lançamento número: " << tentativas << endl;

    cout << endl;

    cout << "Pressione enter para jogar novamente ou ctrl + c para sair \n";

    cin.ignore();

}

int main(){
    int tentativas = 1;

    while(true){
        system("clear");
        header();
        dado();
        lancamentos(tentativas++);
    }

    return 0;
}