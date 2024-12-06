#include <iostream>

using namespace std;

class Fatura{

    private:

    int numero;
    string nome;
    int cc;
    int valor;
    int sh;

    public:

    Fatura(int sh){
        this-> sh = sh;
        cout << "0 ash" << this->sh << endl;
    }

    void criaFatura(){

        cout << "Insira os dados para criar a sua fatura " << endl;

        cout << "Número: ";
        cin >> numero;

        cout << endl;

        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);

        cout << endl;

        cout << "Contribuinte: ";
        cin >> cc;

        cout << endl;

        cout << "Valor: ";
        cin >> valor;

    }

    void imprimirFatura(){

        cout << "A sua fatura: " << endl;

        cout <<"Número: " << numero << endl;
        cout <<"Nome: " << nome << endl;
        cout <<"Contribuinte: "<< cc << endl;
        cout <<"Valor: "<< valor << endl;

    }

};

int main(){

    system("clear");

    Fatura f(432);

    cout << endl;

    f.criaFatura();

    cout << endl;

    f.imprimirFatura();

}