/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Casa.h
 * Author: 2015100354
 *
 * Created on 5 de Junho de 2018, 12:09
 */
#include "Resid.h"
#ifndef CASA_H
#define CASA_H

class Casa:public Resid {
public:
    int nPavi;
    float areaPavi;
    float precoMetro;
    float areaLivre;
    float precoLivre;
    Casa(string tipo ,int identificador,string dono,int nQuartos,int nVagas,int nPavi,float areaPavi,float precoMetro,float areaLivre,float precoLivre);
    Casa(const Casa& orig);
    Casa();
    float preco();
    virtual ~Casa();
    int compara(Casa *a);
    

};

#endif /* CASA_H */

