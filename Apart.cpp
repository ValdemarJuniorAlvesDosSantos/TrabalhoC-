
#include "Apart.h"
using namespace std;
//construtor  de apartamento
Apart::Apart(string tipo ,int identificador,string dono,int nQuartos,int nVagas,int andar,float area, float precoPorMetro, string lazer,int nAndares):
    Resid(tipo , identificador, dono, nQuartos, nVagas){
     this->andar=andar;
    this->area=area;
    this->precoPorMetro=precoPorMetro;
    this->lazer=lazer;
    this->nAndares=nAndares;
}
//construtor  de apartamento por coía
Apart::Apart(const Apart& orig):Resid(orig) {
    this->andar=orig.andar;
    this->area=orig.area;
    this->precoPorMetro=orig.precoPorMetro;
    this->lazer=orig.lazer;
    this->nAndares=orig.nAndares;

}
//função que calcula o preco do apartamento
float Apart::preco(){
    float aux = area *precoPorMetro* (0.9 + float(andar)/float(nAndares));
        if (lazer=="S"){
            return aux*1.15;
        }
        return aux;
}
