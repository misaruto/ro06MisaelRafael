#ifndef PRODUTO_H
#define	PRODUTO_H

#include <iostream>

class Produto {
private:
    int id;
    double preco;
    double custo;
    int estoque; 
    
public:
    
    Produto();
    Produto(const Produto &outro);
    
    void imprimir() const;
    void imprimirResumido() const;
    void preencher();
    void copiar(const Produto& outro);
    
    ///metodo Getters e Setters
    void SetEstoque(int estoque);
    int GetEstoque() const;
    void SetCusto(double custo);
    double GetCusto() const;
    void SetPreco(double preco);
    double GetPreco() const;
    void SetId(int id);
    int GetId() const;
    
 

};

#endif	/* PRODUTO_H */

