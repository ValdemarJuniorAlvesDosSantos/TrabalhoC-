/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Apart.h
 * Author: 2015100354
 *
 * Created on 5 de Junho de 2018, 12:27
 */

#ifndef APART_H
#define APART_H
#include "Resid.h"
class Apart : public Resid{
    int andar;
    float area;
    float precoPorMetro;
    string lazer;
    int nAndares;
public:     
    Apart(string tipo ,int identificador,string dono,int nQuartos,int nVagas, int andar,float area, float precoPorMetro, string lazer,int nAndares);
    Apart(const Apart& orig);
    float preco();
    virtual ~Apart();
private:

};

#endif /* APART_H */

