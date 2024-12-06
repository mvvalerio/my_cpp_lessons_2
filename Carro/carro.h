#ifndef CARRO_H
#define CARRO_H
#endif


#include <iostream>
#include "acoes.h"

using namespace std;


class Carro : public Acoes{
    private:
    string marca;
    string modelo;

    public:
    Carro(string marca, string modelo);

};