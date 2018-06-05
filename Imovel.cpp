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
#include <iostream>
#include "Imovel.h"
using namespace std;

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
    cout<<this->preco()<<endl;
}

int Imovel::getId(){
    return identificador;
}

Imovel::~Imovel() {
    
}

