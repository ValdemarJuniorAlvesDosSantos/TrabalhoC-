//Classe residencia
#include "Imovel.h"
#ifndef RESID_H
#define RESID_H

class Resid : public Imovel {
    protected:
        int nQuartos,nVagas;
    public:
        //construtor da classe
        Resid(string tipo ,int identificador,string dono,int nQuartos,int nVagas);
        //construtor por copia
        Resid(const Resid& orig);
        

    private:

};

#endif /* RESID_H */
