//Classe lista encadeada com template

#ifndef LISTA_H
#define LISTA_H
#include <cstdlib>

using namespace std;
template <class T>
class Lista {
    //classe auxiliar no
    class No {
      public:
          No* prox;
          T info;
      };

    private:
No* prim;

public:
//destrutor
~Lista(){}
//construtor
Lista() { prim = NULL; }
//função de insersao
void insereInicio(T valor);
//função para pegar n-ésimoItem da lista
int pegaNaLista(int n);
//função de impressao da lista
void imprime(ofstream &saida);
//função que remove um item dado um identificador
void remove(int n);
//função que ordena uma lista
void ordena();
//função que retorna o tamanho de uma lista
int tam();
//função que retorna os n ultimos elementos da lista
Lista<T> ultimos(int n);
};

//função que retorna o tamanho de uma lista
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
//função que retorna os n ultimos elementos da lista
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
//função de insersao onde sempre se insere no inicio
template <class T>
void Lista<T>::insereInicio(T valor) {
    No* novo = new No();
    novo->info= valor;
    novo->prox=this->prim;
    this->prim=novo;
}
//função para pegar n-ésimoItem da lista
template <class T>
int Lista<T>::pegaNaLista(int n){

    No* aux = this->prim;
    for (int i = 1; i < n;i++){
        aux=aux->prox;
    }
    return aux->info->getId();;
}
//função de impressao da lista
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
//função que remove um item dado um identificador
template <class T>
void Lista<T>::remove(int n){
    No* aux = this->prim;
    if (aux==NULL){
        return;
    }
    if (aux->info->getId()==n){

        this->prim = this->prim->prox;
        return;
    }

    while (aux->prox!=NULL){

        if (aux->prox->info->getId()==n){

            aux->prox=aux->prox->prox;
            return;
        }
        aux=aux->prox;
    }
}
//função que ordena uma lista

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
