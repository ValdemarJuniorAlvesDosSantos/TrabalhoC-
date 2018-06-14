
#include "Triang.h"
//construtor da classe
Triang::Triang(string tipo ,int identificador,string dono,string solo,float preco,float base,float altura):
    Terreno(tipo,identificador,dono,solo,preco){
        this->base=base;
        this->altura=altura;
}
//construtor de copia
Triang::Triang(const Triang& orig):Terreno(orig){
    this->base=orig.base;
    this->altura=orig.altura;
}
//função que retorna a area
float Triang::area(){
    return base*altura/2;
}
