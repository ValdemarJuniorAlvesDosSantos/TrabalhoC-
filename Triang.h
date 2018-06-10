/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triang.h
 * Author: vj-estudos
 *
 * Created on 2 de Junho de 2018, 08:28
 */
#include "Terreno.h"
#ifndef TRIANG_H
#define TRIANG_H

class Triang: public Terreno{
    float base,altura;
public:
    Triang(string tipo ,int identificador,string dono,string solo,float preco,float base,float altura);
    Triang(const Triang& orig);
    Triang();
    float area();
    virtual ~Triang();
private:

};

#endif /* TRIANG_H */

