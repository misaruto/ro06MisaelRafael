#ifndef NODO_H
#define	NODO_H

#include "Produto.h"

class Nodo {
private:
    Produto item;
    Nodo* prox;

public:
    Nodo();
    Nodo(Produto &p);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    
    
    
    
    //GETTERS e SETTERS
    void SetProx(Nodo* prox);
    Nodo* GetProx() const;
    void SetItem(Produto item);
    Produto GetItem() const;

    

};

#endif	/* NODO_H */

