/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Terreno.h
 * Author: vj-estudos
 *
 * Created on 1 de Junho de 2018, 12:35
 */
#include <string>
using namespace std;
#include "Imovel.h"

#ifndef TERRENO_H
#define TERRENO_H

class Terreno: public Imovel {
    string solo;
    float precoMetro;
public:
    Terreno(string tipo ,int identificador,string dono,string solo,float preco);
    Terreno(const Terreno& orig);
    virtual float area()=0;
    float preco();
    virtual ~Terreno();
private:

};

#endif /* TERRENO_H */

