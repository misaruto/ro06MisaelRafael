/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: misael
 * 
 * Created on October 5, 2019, 2:02 PM
 */

#include "Lista.h"

Lista::Lista() {
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

void Lista::SetHead(Nodo* head) {
    this->head = head;
}

Nodo* Lista::GetHead() const {
    return head;
}

void Lista::SetQuant(int quant) {
    this->quant = quant;
}

int Lista::GetQuant() const {
    return quant;
}

