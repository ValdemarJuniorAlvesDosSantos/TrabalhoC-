/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Retang.h
 * Author: vj-estudos
 *
 * Created on 2 de Junho de 2018, 08:47
 */
#include "Terreno.h"
#ifndef RETANG_H
#define RETANG_H

class Retang: public Terreno {
    float lado1,lado2;
public:
    Retang(string tipo ,int identificador,string dono,string solo,float preco,float lado1,float lado2);
    Retang(const Retang& orig);
    Retang();
    float area();
    virtual ~Retang();
private:

};

#endif /* RETANG_H */

