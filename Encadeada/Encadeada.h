#ifndef LISTAPRODUTO_H
#define	LISTAPRODUTO_H

#include "Produto.h"
#include "Nodo.h"

class Encadeada {
private:
    int quant;
    Nodo *head;

public:
    Encadeada();
    Encadeada(const Encadeada& outra);    
    virtual ~Encadeada();
    
    void insert();    
    void remove();    
    Nodo* buscar(int idProduto);   
    Nodo* getElemento(int posicao);
    
    void insert(int posicao);
    void remove(int posicao);
    void preencherListaToda();        
    int buscarIndice(int idProduto);//retorna a posição na lista
    Produto* buscar(double preco);
    
    bool isEmpty ();        
    void imprimir();
    
    //GETTERS E SETTERS
    void setQuant(int quant);
    int getQuant() const;
};

#endif	/* LISTAPRODUTO_H */

