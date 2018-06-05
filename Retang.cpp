/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Retang.cpp
 * Author: vj-estudos
 * 
 * Created on 2 de Junho de 2018, 08:47
 */

#include "Retang.h"

Retang::Retang(string tipo ,int identificador,string dono,string solo,float preco,float lado1,float lado2):
    Terreno(tipo ,identificador, dono, solo, preco){
    this->lado1=lado1;
    this->lado2=lado2;
}

Retang::Retang(const Retang& orig):Terreno(orig){
    this->lado1=orig.lado1;
    this->lado2=orig.lado2;
}
float Retang::area(){
    return lado1*lado2;
}
Retang::~Retang() {
}

