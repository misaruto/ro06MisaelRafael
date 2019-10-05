/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.h
 * Author: misael
 *
 * Created on October 5, 2019, 2:05 PM
 */

#ifndef PRODUTO_H
#define PRODUTO_H
#include <string.h>
class Produto {
public:
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();
    void SetEstoque(int estoque);
    int GetEstoque() const;
    void SetPreco(float preco);
    float GetPreco() const;
    void SetNome(String nome);
    String GetNome() const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
private:
    	int codigo;
	String nome;
	float preco;
	int estoque;
};

#endif /* PRODUTO_H */

