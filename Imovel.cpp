/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Imovel.cpp
 * Author: vj-estudos
 * 
 * Created on 1 de Junho de 2018, 11:54
 */

#include "Imovel.h"
using namespace std;
Imovel::Imovel(){

}
Imovel::Imovel(string tipo ,int identificador,string dono) {
    this->tipo=tipo;
    this->identificador=identificador;
    this->dono=dono;
}

Imovel::Imovel(const Imovel& orig) {
    this->tipo=orig.tipo;
    this->identificador=orig.identificador;
    this->dono=orig.dono;
}
void Imovel::imprime(){
    cout<< this->identificador <<", ";
}
float Imovel::preco(){
    return 0;
}
int Imovel::getId(){
    return identificador;
}
int Imovel::comp(int i){
    return identificador-i;
}
Imovel::~Imovel() {
    
}

