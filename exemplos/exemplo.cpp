#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

struct Marvel {
    string b = "batman";
    string s = "spiderman";
    string h = "hulk";
    string i = "ironman";
    string w = "wonderwoman";
};

Marvel escolha;

void gerarPersonagem() {
    srand(time(NULL));
    string personagem;

    // Escolhendo um personagem aleatório
    int aleatorio = rand() % 5; // Gera um número entre 0 e 4
    if (aleatorio == 0) personagem = escolha.b;
    else if (aleatorio == 1) personagem = escolha.s;
    else if (aleatorio == 2) personagem = escolha.h;
    else if (aleatorio == 3) personagem = escolha.i;
    else personagem = escolha.w;

    // Inicializa a string oculta
    string progresso(personagem.size(), '_');

    string entrada;
    bool acertou = false;

    // Jogo simples
    while (progresso != personagem) {
        cout << "\nPersonagem: " << progresso << endl;
        cout << "Digite uma letra ou o nome completo: ";
        cin >> entrada;

        // Verifica se a entrada é o nome completo
        if (entrada == personagem) {
            progresso = personagem;
            break;
        }

        // Se for uma única letra, verifica e atualiza
        if (entrada.size() == 1) {
            char letra = entrada[0];
            acertou = false;

            for (size_t i = 0; i < personagem.size(); i++) {
                if (personagem[i] == letra) {
                    progresso[i] = letra;
                    acertou = true;
                }
            }

            if (!acertou) {
                cout << "Letra incorreta!" << endl;
            } else {
                cout << "Boa! Letra correta." << endl;
            }
        } else {
            cout << "Nome incorreto!" << endl;
        }
    }

    cout << "\nParabéns! Você adivinhou: " << personagem << endl;
}

int main() {
    gerarPersonagem();
    return 0;
}
