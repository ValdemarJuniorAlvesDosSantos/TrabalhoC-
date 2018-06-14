//Classe Casa
#include "Resid.h"
#ifndef CASA_H
#define CASA_H

class Casa:public Resid {
  //atributos
  int nPavi; // numero de pavimentos
  float areaPavi; // area por pavimentos
  float precoMetro;
  float areaLivre;
  float precoLivre;
public:
    //construtor de casa
    Casa(string tipo ,int identificador,string dono,int nQuartos,int nVagas,int nPavi,float areaPavi,float precoMetro,float areaLivre,float precoLivre);
    //construtor por copia
    Casa(const Casa& orig);
    //função de preço
    float preco();
  
    //função que compara duas casas
    int compara(Casa *a);
    //função que retorna a area construida da casa
    float getArea(){ return areaPavi*nPavi;}


};

#endif /* CASA_H */
