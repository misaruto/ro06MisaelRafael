#include "Nodo.h"

Nodo::Nodo() {
    prox = NULL;    
}

Nodo::Nodo(Produto& p){
    item.copiar(p);
    prox = NULL;
}


Nodo::Nodo(const Nodo& outro) {
    item.copiar(outro.GetItem());
}

Nodo::~Nodo() {
}

/**
 * GETTERS e SETTERS
 */

void Nodo::SetProx(Nodo* prox) {
    this->prox = prox;
}

Nodo* Nodo::GetProx() const {
    return prox;
}

void Nodo::SetItem(Produto item) {
    this->item = item;
}

Produto Nodo::GetItem() const {
    return item;
}

