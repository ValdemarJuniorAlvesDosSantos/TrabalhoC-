/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: vj-estudos
 *
 * Created on 5 de Junho de 2018, 21:10
 */

#ifndef LISTA_H
#define LISTA_H
#include <cstdlib>
#include "Imovel.h"

using namespace std;
template <class T>
class Lista {
    
    class No {
    public:
        No* prox;
        T info;
    };
    private:   
No* prim;

public:
~Lista(){}
Lista() { prim = NULL; }
void insereInicio(T valor);
int pegaNaLista(int n);
void imprime(ofstream &saida);
void remove(int n);
void ordena();
int tam();
Lista<T> ultimos(int n);
};
template <class T>
int Lista<T>::tam(){
    No* aux=this->prim;
    int t=0;
    while (aux!=0){
        t++;
        aux=aux->prox;
    }
    return t;
    
}
template <class T>
Lista<T> Lista<T>::ultimos(int n){
    int i=0;
    No* aux=this->prim;
    while (i < this->tam() - n){
        i++;
        aux =aux->prox;
    }
    Lista<T> nova;
    nova.prim=aux;
    return nova;
}

template <class T>
void Lista<T>::insereInicio(T valor) { 
    No* novo = new No();
    novo->info= valor;
    novo->prox=this->prim;
    this->prim=novo;
}
template <class T>
int Lista<T>::pegaNaLista(int n){
    
    No* aux = this->prim;
    for (int i = 1; i < n;i++){
        aux=aux->prox;
    }
    return aux->info->getId();;
}
template <class T>
void Lista<T>::imprime(ofstream &saida){
    No* aux = this->prim;
    if (aux!=NULL){
         saida << aux->info->getId();
    }else{
        saida<<endl;
        return ;
    }
    aux=aux->prox;
    while (aux!=NULL){
        saida <<", " << aux->info->getId();
        aux=aux->prox;
    }
    saida<<endl;
}

template <class T>
void Lista<T>::remove(int n){
    No* aux = this->prim;
    if (aux==NULL){
        return;
    }
    if (aux->info->comp(n)==0){
       
        this->prim = this->prim->prox;
        return;
    }
    
    while (aux->prox!=NULL){
        
        if (aux->prox->info->comp(n)==0){
          
            aux->prox=aux->prox->prox;
            return;
        }
        aux=aux->prox;
    }
}

template <class T>
void Lista<T>::ordena(){
    
    No* proAt=this->prim;
    while (proAt!=NULL){
        No* aux=proAt;
        No* maior=proAt;
        while (aux!=NULL){
            if ( maior->info->compara(aux->info) != 1){
                maior=aux;
            }
            aux=aux->prox;
        }
        T aux2 =proAt->info;
        proAt->info=maior->info;
        maior->info=aux2;
        proAt=proAt->prox;
    }
}
#endif /* LISTA_H */

