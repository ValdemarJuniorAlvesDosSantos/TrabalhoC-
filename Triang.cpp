/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triang.cpp
 * Author: vj-estudos
 * 
 * Created on 2 de Junho de 2018, 08:28
 */

#include "Triang.h"

Triang::Triang(string tipo ,int identificador,string dono,string solo,float preco,float base,float altura):
    Terreno(tipo,identificador,dono,solo,preco){
        this->base=base;
        this->altura=altura;
}

Triang::Triang(const Triang& orig):Terreno(orig){
    this->base=orig.base;
    this->altura=orig.altura;
}
float Triang::area(){
    return base*altura/2;
}
Triang::~Triang() {

}

