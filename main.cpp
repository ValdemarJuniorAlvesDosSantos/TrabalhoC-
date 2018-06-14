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
//função que remove um item das 3 listas, caso i nao pertença a lista essa nao sofre alteração
void exclui (Lista<Imovel*> &lista, Lista<Terreno*> &argilosos, Lista<Casa*> &casas,int i){
    lista.remove(i);
    casas.remove(i);
    argilosos.remove(i);
}
// função que lê dos arquivos e insere nas listas
void adiciona (Lista<Imovel*> &lista, Lista<Terreno*> &argilosos, Lista<Casa*> &casas, ifstream &in, string linha,float cPreco,float cArea) {
    //lê triangulo
    if (linha == "triang") {

        getline(in, linha);
        int identificador = stoi(linha);
          //caso seja um caso de alteração ele removera o item e ira inserir o novo, caso seja um caso de inclusao (ou leitura do catalogo.txt) ele nao modificara as listas
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
        //caso seja um caso de alteração ele removera o item e ira inserir o novo, caso seja um caso de inclusao (ou leitura do catalogo.txt) ele nao modificara as listas
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
        //caso seja um caso de alteração ele removera o item e ira inserir o novo, caso seja um caso de inclusao (ou leitura do catalogo.txt) ele nao modificara as listas
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
        //caso seja um caso de alteração ele removera o item e ira inserir o novo, caso seja um caso de inclusao (ou leitura do catalogo.txt) ele nao modificara as listas
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
        //Adiciona na lista de casas caso esteja dentro dos requisitos
        if (a->preco()<cPreco && a->getArea()> cArea){
            casas.insereInicio(a);
        }
        lista.insereInicio(new Casa("casa", identificador, dono, nQuartos, nVagas, nPavi, areaPavi, preco, areaLivre, precoLivre));
    }
    if (linha == "apto") {
        getline(in, linha);
        int identificador = stoi(linha);
        //caso seja um caso de alteração ele removera o item e ira inserir o novo, caso seja um caso de inclusao (ou leitura do catalogo.txt) ele nao modificara as listas
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
//função que le catalogo e modifica as listas de casa,terreno e imoveis
void lerCatalogo(Lista<Imovel*> &lista, Lista<Terreno*> &argilosos,Lista<Casa*> &casas, float preco,float area){
    ifstream in("catalogo.txt");
    string linha;
    while (getline(in, linha)){
        adiciona(lista,argilosos,casas,in,linha,preco,area);
    }
    in.close();
}
//função que le o arquivo atual.txt e gera suas modificações
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
    //le espec
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
    //fim da leitura do espec


    //lê catalogo.txt
    lerCatalogo(imoveis,argilosos,casas,cPreco,cArea);
    //le atual.txt
    lerAtual(imoveis,argilosos,casas,cPreco,cArea);
    //ordena listas
    imoveis.ordena();
    argilosos.ordena();
    casas.ordena();
    //cria listas A e B ja como devem ser impressas
    Lista<Imovel*> listaA;
    Lista<Terreno*> listaB;
    listaA=imoveis.ultimos(nImov*imoveis.tam()/100);
    listaB=argilosos.ultimos(nArg*argilosos.tam()/100);

    //cria arquivo  de saida
    ofstream saida("saida.txt");
    //imprime listas
    listaA.imprime(saida);
    listaB.imprime(saida);
    casas.imprime(saida);
    //fecha arquivo de saida
    saida.close();

    int soma=0;
    //calcula soma do arquivo result.txt
    if (listaA.tam() >= i &&i !=0){
        soma+= listaA.pegaNaLista(i);
    }
    if (listaB.tam() >= j && j!=0){
        soma+= listaB.pegaNaLista(j);
    }
    if (casas.tam() >= k && k!=0){
        soma+= casas.pegaNaLista(k);
    }
    //imprime a soma no arquivo
    ofstream result("result.txt");
    result << soma ;
    result.close();
    return 0;
}
