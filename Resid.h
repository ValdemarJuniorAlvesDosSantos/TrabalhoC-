/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Resid.h
 * Author: vj-estudos
 *
 * Created on 3 de Junho de 2018, 13:03
 */
#include "Imovel.h"
#ifndef RESID_H
#define RESID_H

class Resid : public Imovel {
    protected:
        int nQuartos,nVagas;
    public:
        Resid(string tipo ,int identificador,string dono,int nQuartos,int nVagas);
        Resid(const Resid& orig);
        virtual ~Resid();
        Resid();
    private:

};

#endif /* RESID_H */

