
#include "Imovel.h"
using namespace std;
//construtor da classe Imovel
Imovel::Imovel(string tipo ,int identificador,string dono) {
    this->tipo=tipo;
    this->identificador=identificador;
    this->dono=dono;
}
//construtor por copia da classe Imovel
Imovel::Imovel(const Imovel& orig) {
    this->tipo=orig.tipo;
    this->identificador=orig.identificador;
    this->dono=orig.dono;
}
//função que pega o identificador de um Imovel
int Imovel::getId(){
    return identificador;
}
//função de comparação entre dois imoveis por preço
int Imovel::compara(Imovel *a){
    if (this->preco() == a->preco()){
        //compara pro identificador caso os preços sejam iguais
        return this->identificador < a->identificador;
    }
    return this->preco() < a->preco();;
}
