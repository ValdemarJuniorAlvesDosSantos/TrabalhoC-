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
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
//#include "Imovel.h"
//#include "Terreno.h"

#include "Triang.h"
#include "Retang.h"
#include "Trapez.h"
#include "Casa.h"
#include "Apart.h"
#include "Lista.h"

using namespace std;


void lerCatalogo(Lista<Imovel*> &lista){
    ifstream in("catalogo.txt");
    string linha;
    while (getline(in, linha)){
        if (linha=="triang"){
            getline(in,linha);
            int identificador = stoi(linha);
            string dono; getline(in, dono);
            string solo; getline(in, solo);
            getline(in,linha);
            float preco= stof(linha);
            getline(in,linha);
            float base= stof(linha);
            getline(in,linha);
            float altura=stof(linha);
            lista.insereInicio(new Triang("triang",identificador,dono,solo,preco,base,altura));
        }
        //Le retang
         if (linha=="retang"){
            getline(in,linha);
            int identificador = stoi(linha);
            string dono; getline(in, dono);
            string solo; getline(in, solo);
            getline(in,linha);
            float preco= stof(linha);
            getline(in,linha);
            float lado1= stof(linha);
            getline(in,linha);
            float lado2=stof(linha);
            lista.insereInicio(new Retang("retang",identificador,dono,solo,preco,lado1,lado2));
        }
        // le trapez
        if (linha=="trapez"){
            getline(in,linha);
            int identificador = stoi(linha);
            string dono; getline(in, dono);
            string solo; getline(in, solo);
            getline(in,linha);
            float preco= stof(linha);
            getline(in,linha);
            float base1= stof(linha);
            getline(in,linha);
            float base2=stof(linha);
            getline(in,linha);
            float altura=stof(linha);
            lista.insereInicio(new Trapez("trapez",identificador,dono,solo,preco,base1,base2,altura));
        }
        if (linha=="casa"){
            getline(in,linha);
            int identificador = stoi(linha);
            string dono; getline(in, dono);
            
            getline(in,linha);
            int nQuartos = stoi(linha);
            
            getline(in,linha);
            int nVagas = stoi(linha);
            
            getline(in,linha);
            int nPavi = stoi(linha);
            
            getline(in,linha);
            float areaPavi=stof(linha);
            
            getline(in,linha);
            float preco=stof(linha);
            
            getline(in,linha);
            float areaLivre=stof(linha);
            
            getline(in,linha);
            float precoLivre=stof(linha);
            
            lista.insereInicio(new Casa("casa",identificador,dono,nQuartos,nVagas,nPavi,areaPavi,preco,areaLivre,precoLivre));
        }
         if (linha=="apto"){
            getline(in,linha);
            int identificador = stoi(linha);
            string dono; getline(in, dono);
            
            getline(in,linha);
            int nQuartos = stoi(linha);
            
            getline(in,linha);
            int nVagas = stoi(linha);
            
            getline(in,linha);
            int andares = stoi(linha);
            
            getline(in,linha);
            float area=stof(linha);
            
            getline(in,linha);
            float precMetro=stof(linha);
            
            string lazer; getline(in,lazer);
            
            getline(in,linha);
            int nAnd = stoi(linha);
            
            lista.insereInicio(new Apart("apto",identificador,dono,nQuartos,nVagas,andares,area,precMetro,lazer,nAnd));
    
         }    
        
    }
    in.close();
}
int main(int argc, char** argv) {
    Triang* a= new Triang("tipo",5,"dono","A",10,5,2);
    Retang* b= new Retang("tipo",5,"dono","A",10,5,2);
    Trapez* c=new Trapez("tipo",5,"dono","A",10,5,0,2);
    Casa* d=new Casa("tipo",5,"dono",1,1,1,10,10,10,10);
    Apart* e=new Apart("tipo" , 10, "dono", 1, 1, 1, 10.0,  10.0,  "N", 10);

    Lista<Imovel*>  imoveis;
    Lista<Terreno*> argilosos;
    Lista<Casa*> casa;
 
//    imoveis.insereInicio(a);
//    
//    imoveis.insereInicio(b);
//    imoveis.insereInicio(c);
//    imoveis.insereInicio(d);
//    imoveis.insereInicio(e);
    lerCatalogo(imoveis);
    imoveis.imprime();
 
    
    return 0;
}

