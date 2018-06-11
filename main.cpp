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


#include "Triang.h"
#include "Retang.h"
#include "Trapez.h"
#include "Casa.h"
#include "Apart.h"
#include "Lista.h"

using namespace std;
void exclui (Lista<Imovel*> &lista, Lista<Terreno*> &argilosos, Lista<Casa*> &casas,int i){
    lista.remove(i);
    casas.remove(i);
    argilosos.remove(i);
}

void adiciona (Lista<Imovel*> &lista, Lista<Terreno*> &argilosos, Lista<Casa*> &casas, ifstream &in, string linha,float cPreco,float cArea) {
    
    if (linha == "triang") {
        
        getline(in, linha);
        int identificador = stoi(linha);
        exclui(lista,argilosos,casas,identificador);
        string dono;
        getline(in, dono);
        string solo;
        getline(in, solo);
        getline(in, linha);
        float preco = stof(linha);
        getline(in, linha);
        float base = stof(linha);
        getline(in, linha);
        float altura = stof(linha);
        if (solo=="G"){
            argilosos.insereInicio(new Triang("triang", identificador, dono, solo, preco, base, altura));
        }
        lista.insereInicio(new Triang("triang", identificador, dono, solo, preco, base, altura));
    }
    //Le retang
    if (linha == "retang") {
        getline(in, linha);
        int identificador = stoi(linha);
        exclui(lista,argilosos,casas,identificador);
        string dono;
        getline(in, dono);
        string solo;
        getline(in, solo);
        getline(in, linha);
        float preco = stof(linha);
        getline(in, linha);
        float lado1 = stof(linha);
        getline(in, linha);
        float lado2 = stof(linha);
         if (solo=="G"){
             argilosos.insereInicio(new Retang("retang", identificador, dono, solo, preco, lado1, lado2));
        }
        lista.insereInicio(new Retang("retang", identificador, dono, solo, preco, lado1, lado2));
    }
    // le trapez
    if (linha == "trapez") {
        getline(in, linha);
        int identificador = stoi(linha);
        exclui(lista,argilosos,casas,identificador);
        string dono;
        getline(in, dono);
        string solo;
        getline(in, solo);
        
        getline(in, linha);
        float preco = stof(linha);
        getline(in, linha);
        float base1 = stof(linha);
        getline(in, linha);
        float base2 = stof(linha);
        getline(in, linha);
        float altura = stof(linha);
        if (solo=="G"){
            argilosos.insereInicio(new Trapez("trapez", identificador, dono, solo, preco, base1, base2, altura));
        }
        lista.insereInicio(new Trapez("trapez", identificador, dono, solo, preco, base1, base2, altura));
    }
    if (linha == "casa") {
        getline(in, linha);
        int identificador = stoi(linha);
        exclui(lista,argilosos,casas,identificador);
        string dono;
        getline(in, dono);
        
        getline(in, linha);
        int nQuartos = stoi(linha);

        getline(in, linha);
        int nVagas = stoi(linha);

        getline(in, linha);
        int nPavi = stoi(linha);

        getline(in, linha);
        float areaPavi = stof(linha);

        getline(in, linha);
        float preco = stof(linha);

        getline(in, linha);
        float areaLivre = stof(linha);

        getline(in, linha);
        float precoLivre = stof(linha);
        Casa* a=new Casa("casa", identificador, dono, nQuartos, nVagas, nPavi, areaPavi, preco, areaLivre, precoLivre);
        if (a->preco()<cPreco && a->areaPavi*a->nPavi> cArea){
            casas.insereInicio(a);
        }
        lista.insereInicio(new Casa("casa", identificador, dono, nQuartos, nVagas, nPavi, areaPavi, preco, areaLivre, precoLivre));
    }
    if (linha == "apto") {
        getline(in, linha);
        int identificador = stoi(linha);
        exclui(lista,argilosos,casas,identificador);
        string dono;
        getline(in, dono);
        
        getline(in, linha);
        int nQuartos = stoi(linha);

        getline(in, linha);
        int nVagas = stoi(linha);

        getline(in, linha);
        int andares = stoi(linha);

        getline(in, linha);
        float area = stof(linha);

        getline(in, linha);
        float precMetro = stof(linha);

        string lazer;
        getline(in, lazer);

        getline(in, linha);
        int nAnd = stoi(linha);

        lista.insereInicio(new Apart("apto", identificador, dono, nQuartos, nVagas, andares, area, precMetro, lazer, nAnd));

    }      
}

void lerCatalogo(Lista<Imovel*> &lista, Lista<Terreno*> &argilosos,Lista<Casa*> &casas, float preco,float area){
    ifstream in("catalogo.txt");
    string linha;
    while (getline(in, linha)){
        adiciona(lista,argilosos,casas,in,linha,preco,area);        
    }
    in.close();
}
void lerAtual(Lista<Imovel*> &lista, Lista<Terreno*> &argilosos,Lista<Casa*> &casas, float preco,float area){
    ifstream in("atual.txt");
    string linha;
    while (getline(in, linha)){
        if (linha=="i"){
            getline(in, linha);
            adiciona(lista,argilosos,casas,in,linha,preco,area);   
        }
        if (linha=="a"){
            getline(in,linha);
            adiciona(lista,argilosos,casas,in,linha,preco,area);            
        }
        if (linha=="e"){
            getline(in,linha);
            exclui(lista,argilosos,casas,stoi(linha));
        }
    }
    in.close();
}



int main(int argc, char** argv) {
    Lista<Casa*> casas;
    Lista<Imovel*>  imoveis;
    Lista<Terreno*> argilosos;
    int nImov,nArg,i,j,k;
    float cPreco,cArea;
    ifstream in("espec.txt");
    string linha;
    getline(in, linha);
    nImov=stoi(linha);
    
    getline(in, linha);
    nArg=stoi(linha);
    
    getline(in, linha);
     cArea = stof(linha);
    
    getline(in, linha);
     cPreco = stof(linha);

    getline(in, linha);
    i=stoi(linha);
    
    getline(in, linha);
    j=stoi(linha);
    
    getline(in, linha);
    k=stoi(linha);
    in.close();
    
    
    lerCatalogo(imoveis,argilosos,casas,cPreco,cArea);
    lerAtual(imoveis,argilosos,casas,cPreco,cArea);
    casas.imprime();
    
    return 0;
}

