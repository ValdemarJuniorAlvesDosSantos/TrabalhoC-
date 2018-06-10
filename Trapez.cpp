/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Trapez.cpp
 * Author: vj-estudos
 * 
 * Created on 3 de Junho de 2018, 12:29
 */

#include "Trapez.h"
Trapez::Trapez():Terreno(){
}
Trapez::Trapez(string tipo ,int identificador,string dono,string solo,float precoMetro,float base1,float base2,float altura):
    Terreno(tipo ,identificador, dono, solo,precoMetro){
    this->base1=base1;
    this->base2=base2;
    this->altura=altura;
}

Trapez::Trapez(const Trapez& orig):Terreno(orig) {
    this->base1=orig.base1;
    this->base2=orig.base2;
    this->altura=orig.altura;
}
float Trapez::area(){
    return (base1+base2)*altura/2;
}

Trapez::~Trapez() {
}

