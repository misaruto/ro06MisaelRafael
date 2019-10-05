/* 
 * File:   ListaProduto.cpp
 * Author: jose
 * 
 * Created on November 11, 2015, 10:10 AM
 */

#include "Encadeada.h"
#include<iostream>

using namespace std;

Encadeada::Encadeada() {
    quant = 0;
    head = NULL;
}

Encadeada::Encadeada(const Encadeada& outra) {
    
}

Encadeada::~Encadeada() {
    //será chamado quando o objeto for destruido
}


int Encadeada::buscarIndice(int idProduto) {
   
}

/**
 * Retorna o endereco do elemento da posiçao: n
 * @param posicao
 * @return 
 */
Nodo* Encadeada::getElemento(int n){
    Nodo* p = head;
    int j = 1;   
    
    while (j <= n-1 && p->GetProx() != NULL) {  
        p = p->GetProx();
        j++;
    }
    
    //Usado para conferir, quando o elemento não existe na lista
    if (j == n) 
	    return p;
    else          
        return NULL; // posicao invalida

}

Nodo* Encadeada::buscar(int idProduto) {
    for(Nodo*p = head; p != NULL; p = p->GetProx()){
        if(p->GetItem().GetId() == idProduto)
            return p;
    }
    
    return NULL;
}


Produto* Encadeada::buscar(double preco) {
   
}

void Encadeada::preencherListaToda() {
   
}

void Encadeada::insert() {
    Produto p;
    p.preencher();
    Nodo *novo;
    novo = new Nodo(p);
    novo->SetProx(head);
    head = novo;
    quant++;
}

void Encadeada::insert(int posicao) {
    Nodo * anterior = getElemento(posicao);
    Produto prod;
    prod.preencher();
    Nodo * novo = new Nodo(prod);
    novo->SetProx(anterior->GetProx());
    anterior->SetProx(novo);
    quant++;
}

void Encadeada::remove() {
    head = head->GetProx();
    quant--;
}

void Encadeada::remove(int posicao) {
    //cria um apontador para o nó anterior, pois contem o apontador para o que se quer apagar
   Nodo * anterior = getElemento(posicao);
   //cria um apontador para o que se quer apagar, pois ele contem o apontador para o proximo
   Nodo * atual = getElemento(posicao +1);
   //o anterior passa a apontar para o proximo do que se quer apagar
   anterior->SetProx(atual->GetProx());
   quant--;
}

bool Encadeada::isEmpty() {
    if(quant == 0)
        return true;
    else
        return false;
    
}

void Encadeada::imprimir() {
    cout << ">>>>>>>>>>>>>> Dados da Lista <<<<<<<<<<<<<<<<<<<<\n";
    if (isEmpty()) {
        cout << "Lista vazia\n";
    } else {
        Nodo* p = head;
        while(p!=NULL){
            p->GetItem().imprimirResumido();
            p = p->GetProx();
        }        
    }
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
}

/**
 *  GETTERS E SETTERS 
 */
void Encadeada::setQuant(int quant) {
    this->quant = quant;
}

int Encadeada::getQuant() const {
    return quant;
}