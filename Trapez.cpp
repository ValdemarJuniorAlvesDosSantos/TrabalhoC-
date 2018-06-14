
#include "Trapez.h"
//construtor da classe
Trapez::Trapez(string tipo ,int identificador,string dono,string solo,float precoMetro,float base1,float base2,float altura):
    Terreno(tipo ,identificador, dono, solo,precoMetro){
    this->base1=base1;
    this->base2=base2;
    this->altura=altura;
}
//construtor por copia
Trapez::Trapez(const Trapez& orig):Terreno(orig) {
    this->base1=orig.base1;
    this->base2=orig.base2;
    this->altura=orig.altura;
}
//função que calcula a area
float Trapez::area(){
    return (base1+base2)*altura/2;
}
