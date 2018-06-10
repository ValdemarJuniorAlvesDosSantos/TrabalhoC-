/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Imovel.h
 * Author: vj-estudos
 *
 * Created on 1 de Junho de 2018, 11:54
 */
#include <iostream>
#include <string>
using namespace std;

#ifndef IMOVEL_H
#define IMOVEL_H

class Imovel {
    int identificador;
    string tipo;
    string dono;

public:
    Imovel(string tipo ,int identificador,string dono);
    Imovel(const Imovel& orig);
    Imovel();
    
    void imprime();
    int getId();
    virtual float preco();
    virtual ~Imovel();
private:

};

#endif /* IMOVEL_H */

