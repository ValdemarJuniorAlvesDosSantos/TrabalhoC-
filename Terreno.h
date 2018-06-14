//Classe Terreno
#include <string>
using namespace std;
#include "Imovel.h"

#ifndef TERRENO_H
#define TERRENO_H

class Terreno: public Imovel {
    string solo;
    float precoMetro;
public:
    //construtor da classe
    Terreno(string tipo ,int identificador,string dono,string solo,float preco);
    //construtor pro copia
    Terreno(const Terreno& orig);
    //função virtual que calcula a area (deve ser sobreescrita)
    virtual float area()=0;
    //função que calcula o preço
    float preco();
    //função que compara dois terrenos
    int compara(Terreno* a);

private:

};

#endif /* TERRENO_H */
