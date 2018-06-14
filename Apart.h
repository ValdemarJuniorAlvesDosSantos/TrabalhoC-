//Classe apartamento

#ifndef APART_H
#define APART_H
#include "Resid.h"
class Apart : public Resid{
  //atributos
    int andar;
    float area;
    float precoPorMetro;
    string lazer;
    int nAndares;
public:
    //construtor
    Apart(string tipo ,int identificador,string dono,int nQuartos,int nVagas, int andar,float area, float precoPorMetro, string lazer,int nAndares);
    //construtor de copia
    Apart(const Apart& orig);
    //função que calcula a area
    float preco();
  
private:

};

#endif /* APART_H */
