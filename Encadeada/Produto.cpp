/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.cpp
 * Author: misael
 * 
 * Created on October 5, 2019, 2:05 PM
 */

#include "Produto.h"
#include <string.h>

Produto::Produto() {
}

Produto::Produto(const Produto& orig) {
}

Produto::~Produto() {
}

void Produto::SetEstoque(int estoque) {
    this->estoque = estoque;
}

int Produto::GetEstoque() const {
    return estoque;
}

void Produto::SetPreco(float preco) {
    this->preco = preco;
}

float Produto::GetPreco() const {
    return preco;
}

void Produto::SetNome(String nome) {
    this->nome = nome;
}

String Produto::GetNome() const {
    return nome;
}

void Produto::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Produto::GetCodigo() const {
    return codigo;
}

