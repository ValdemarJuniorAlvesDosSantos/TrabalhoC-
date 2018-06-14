//Classe retangulo
#include "Terreno.h"
#ifndef RETANG_H
#define RETANG_H

class Retang: public Terreno {
    float lado1,lado2;
public:
    // construtor da classe
    Retang(string tipo ,int identificador,string dono,string solo,float preco,float lado1,float lado2);
    //construtor por copia
    Retang(const Retang& orig);
    //funcao que calcula a area
    float area();
  
private:

};

#endif /* RETANG_H */
