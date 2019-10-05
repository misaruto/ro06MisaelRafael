/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: misael
 *
 * Created on October 5, 2019, 2:02 PM
 */

#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    void SetHead(Nodo* head);
    Nodo* GetHead() const;
    void SetQuant(int quant);
    int GetQuant() const;
private:
    int quant;
    Nodo * head;
};

#endif /* LISTA_H */

