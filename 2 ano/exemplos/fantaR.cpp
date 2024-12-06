#include <iostream>

using namespace std;


struct lata{

    string marca;
    string sabor;
    string validade;
    string fornecedor;
    string lote;
    string codBarras;
    string dataFab;
    string infoFornecedeor;
    string infoNutricional[5];
    string materialEmbalagem;
    float preco;
    double capacidade;
    double peso;
    bool status;

};

class Refrigerante{

    private:

        lata refri;
        double qntSumoDisp;

    public:
    
    // Counstrutor ---------------------
    Refrigerante(lata lata){
        refri = lata;
        qntSumoDisp = refri.capacidade;
    }

    // Abrir Lata --------------------------------------
    void abrirLata(){
        if(refri.status == false){
            cout << "A abrir lata tssssssssssssss.... !" << endl;
            refri.status = true;
        }else{
            cout << "Lata já está aberta !" << endl;
        }
    }

    // Beber Refrigerante ---------------------------------------------------------------------
    void beberRefri(){
        double golo;
        if(qntSumoDisp == 0){
        cout << "Não há refrigerante disponível !" << endl;
        }else{
            if(refri.status){

                cout << "Há " << qntSumoDisp << " de refrigerante disponivel." << endl;
                cout << "Digite a quantidade de refrigerante que deseja beber: ";
                cin >> golo;
                if(golo <= qntSumoDisp){
                    qntSumoDisp -= golo;    // golo -= qntSumoDisp   =   golo = qntSumoDisp - golo
                    cout << "Bebeu " << golo << " litros de refrigerante !" << endl;
                }else{
                    cout << "Não há refrigerante suficiente !" << endl;
                }
            }else{
                cout << "É necessário abrir antes de beber !" << endl;
            }
        }
    }   

    //

};


int main(){

    system("clear");

    lata lata1 = {"Fanta","Ananás","10/10/2025","Coca-Cola","1234567890","664823702311","10/8/2025","Coca-Cola & Co.",{"Calorias: 100","Carboidratos: 30","Proteinas: 0","Gorduras: 0", "Sodio: 10"},"Alumínio", 5.00, 350, 0.350, false};


    Refrigerante refri1(lata1);

    while(true){
        int opc;
        cout << "1 - Abrir Lata" << endl;
        cout << "2 - Beber Refrigerante" << endl;
        cout << "3 - Sair" << endl;
        cout << "Insira a sua opção: ";
        cin >> opc;

        if(opc == 1){
            refri1.abrirLata();
        }else if(opc == 2){
            system("clear");
            refri1.beberRefri();
        }else if(opc == 3){
            system("clear");
            cout << "A sair...." << endl;
            exit(0);
        }else{
            cout << "Opção inválida !" << endl;
        }
    }

    return 0;
}