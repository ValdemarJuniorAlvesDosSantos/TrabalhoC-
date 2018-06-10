/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Resid.cpp
 * Author: vj-estudos
 * 
 * Created on 3 de Junho de 2018, 13:03
 */

#include "Resid.h"
Resid::Resid():Imovel(){
}
Resid::Resid(string tipo ,int identificador,string dono,int nQuartos,int nVagas):
    Imovel(tipo,identificador,dono){
    this->nQuartos=nQuartos;
    this->nVagas=nVagas;
    
}

Resid::Resid(const Resid& orig): Imovel(orig) {
    this->nQuartos=orig.nQuartos;
    this->nVagas=orig.nVagas;
}

Resid::~Resid() {
}

