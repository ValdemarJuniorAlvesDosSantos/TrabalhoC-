
#include "Retang.h"
//construtor da classe retangulo
Retang::Retang(string tipo ,int identificador,string dono,string solo,float preco,float lado1,float lado2):
    Terreno(tipo ,identificador, dono, solo, preco){
    this->lado1=lado1;
    this->lado2=lado2;
}
//construtor por copia
Retang::Retang(const Retang& orig):Terreno(orig){
    this->lado1=orig.lado1;
    this->lado2=orig.lado2;
}
//função que retorna a area
float Retang::area(){
    return lado1*lado2;
}
