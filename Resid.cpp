//Classe que representa residencia

#include "Resid.h"
//construtor da classe residencia
Resid::Resid(string tipo ,int identificador,string dono,int nQuartos,int nVagas):
    Imovel(tipo,identificador,dono){
    this->nQuartos=nQuartos;
    this->nVagas=nVagas;

}
//construtor pro copia
Resid::Resid(const Resid& orig): Imovel(orig) {
    this->nQuartos=orig.nQuartos;
    this->nVagas=orig.nVagas;
}
