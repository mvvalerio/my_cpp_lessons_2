#include <iostream>

using namespace std;


class A{

    public:

    int pubA = 1;

    private:

    int privA = 2;

    protected:

    int protA = 3;

};


class B : public A{

    public:

    int pubB = 1;

    private:

    int privB = 2;

    protected:

    int protB = 3;

};


int main(){





    return 0;
}