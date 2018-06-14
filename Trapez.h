//Classe trapez
#include "Terreno.h"
#ifndef TRAPEZ_H
#define TRAPEZ_H

class Trapez : public Terreno{
    float base1,base2,altura;
public:
    //contrutor da classe
    Trapez(string tipo ,int identificador,string dono,string solo,float precoMetro,float base1,float base2,float altura);
    //construtor por copia
    Trapez(const Trapez& orig);
    //função que retorna a area
    float area();
    
private:

};

#endif /* TRAPEZ_H */
