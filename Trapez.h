/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Trapez.h
 * Author: vj-estudos
 *
 * Created on 3 de Junho de 2018, 12:29
 */
#include "Terreno.h"
#ifndef TRAPEZ_H
#define TRAPEZ_H

class Trapez : public Terreno{
    float base1,base2,altura;
public:
    Trapez(string tipo ,int identificador,string dono,string solo,float precoMetro,float base1,float base2,float altura);
    Trapez(const Trapez& orig);
    float area();
    virtual ~Trapez();
private:

};

#endif /* TRAPEZ_H */

