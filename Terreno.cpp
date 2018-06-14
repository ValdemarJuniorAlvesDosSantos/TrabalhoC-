
#include "Terreno.h"
//construtor da classe
Terreno::Terreno(string tipo ,int identificador,string dono,string solo,float precoMetro):
    Imovel(tipo,identificador,dono){
      this->solo=solo;
      this->precoMetro=precoMetro;
}
//construtor por copia
Terreno::Terreno(const Terreno& orig):Imovel(orig){
    this->solo=orig.solo;
    this->precoMetro=orig.precoMetro;
}
//função que calcula o preco de um terreno
float Terreno::preco(){
    float aux=this->area()*precoMetro;
    if (this->solo=="A"){
        return aux*0.9;
    }
     if (this->solo=="G"){
        return aux*1.3;
    }
    return aux*1.1;
}
//função que compara dois terrenos
int Terreno::compara(Terreno* a){
    if (this->area()==a->area()){
        return this->getId() > a->getId();
    }
    return this->area() > a->area();
}
