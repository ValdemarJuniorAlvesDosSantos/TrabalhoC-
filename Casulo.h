#include <iostream>
using namespace std;
#ifndef CASULO_H_
#define CASULO_H_
template <class T>
class Casulo {
    T conteudo;
    public:
        Casulo(T conteudo) { this->conteudo = conteudo; }
        void imprimir() const;
};

template <class T>
void Casulo<T>::imprimir() const {
        cout << conteudo << endl;
}

#endif