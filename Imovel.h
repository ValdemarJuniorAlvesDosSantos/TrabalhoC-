//Classe Imovel
#include <iostream>
#include <string>
using namespace std;

#ifndef IMOVEL_H
#define IMOVEL_H

class Imovel {
    int identificador;
    string tipo;
    string dono;

public:
    //construtor
    Imovel(string tipo ,int identificador,string dono);
    //construtor por copia
    Imovel(const Imovel& orig);
    //função que pega o Id
    int getId();
    //função virtual que calcula o preco(deve ser sobreescrita)
    virtual float preco()=0;
    //função que compara dois Imoveis
    int compara(Imovel *a);



};

#endif /* IMOVEL_H */
