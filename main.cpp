/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vj-estudos
 *
 * Created on 1 de Junho de 2018, 11:53
 */

#include <cstdlib>
//#include "Imovel.h"
//#include "Terreno.h"
#include "Triang.h"
#include "Retang.h"
#include "Trapez.h"
#include "Casa.h"
#include "Apart.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Triang a=Triang("tipo",5,"dono","A",10,5,2);
    Retang b=Retang("tipo",5,"dono","A",10,5,2);
    Trapez c=Trapez("tipo",5,"dono","A",10,5,0,2);
    Casa d=Casa("tipo",5,"dono",1,1,1,10,10,10,10);
    Apart e=Apart("tipo" , 10, "dono", 1, 1, 1, 10.0,  10.0,  "N", 10);
    a.imprime();
    b.imprime();
    c.imprime();
    d.imprime();
    e.imprime();
    return 0;
}

