/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Terreno.cpp
 * Author: vj-estudos
 * 
 * Created on 1 de Junho de 2018, 12:35
 */

#include "Terreno.h"

Terreno::Terreno(string tipo ,int identificador,string dono,string solo,float precoMetro):
    Imovel(tipo,identificador,dono)
{
    this->solo=solo;
    this->precoMetro=precoMetro;
}

Terreno::Terreno(const Terreno& orig):
    Imovel(orig)
{
    this->solo=orig.solo;
    this->precoMetro=orig.precoMetro;
}
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
Terreno::~Terreno() {
    
}

