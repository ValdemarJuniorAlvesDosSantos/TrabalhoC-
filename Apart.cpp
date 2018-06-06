/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Apart.cpp
 * Author: 2015100354
 * 
 * Created on 5 de Junho de 2018, 12:27
 */

#include "Apart.h"
using namespace std;
Apart::Apart(string tipo ,int identificador,string dono,int nQuartos,int nVagas,int andar,float area, float precoPorMetro, string lazer,int nAndares):
    Resid(tipo , identificador, dono, nQuartos, nVagas){
     this->andar=andar;
    this->area=area;
    this->precoPorMetro=precoPorMetro;
    this->lazer=lazer;
    this->nAndares=nAndares;
}

Apart::Apart(const Apart& orig):Resid(orig) {
    this->andar=orig.andar;
    this->area=orig.area;
    this->precoPorMetro=orig.precoPorMetro;
    this->lazer=orig.lazer;
    this->nAndares=orig.nAndares;
    
}
float Apart::preco(){
    float aux = area *precoPorMetro* (0.9 + float(andar)/float(nAndares));
    //cout<< this->area << endl ;
        if (lazer=="S"){
            return aux*1.15;
        }
        return aux;
}
Apart::~Apart() {
}

