//Classe triangulo
#include "Terreno.h"
#ifndef TRIANG_H
#define TRIANG_H

class Triang: public Terreno{
    float base,altura;
public:
    //construtor da classe
    Triang(string tipo ,int identificador,string dono,string solo,float preco,float base,float altura);
    //construtor por cópia
    Triang(const Triang& orig);
    //função que retorna a area;
    float area();
    
private:

};

#endif /* TRIANG_H */
