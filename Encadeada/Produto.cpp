#include "Produto.h"

using namespace std;

Produto::Produto() {
    id = -1;
    preco = -1;
    custo = -1;
    estoque = -1;    
}

Produto::Produto(const Produto& outro){
    id = outro.GetId();
    preco = outro.GetPreco();
    custo = outro.GetCusto();
    estoque = outro.GetEstoque();
}

void Produto::preencher(){
    cout << "--------------- Preencha os dados do produto ------------------\n";
    cout << "id:";
    cin >> id;
    cout << "Custo:";
    cin >> custo;
    cout << "Preco:";
    cin >> preco;
    cout <<"Estoque:";
    cin >> estoque;         
    cout << "---------------------------------------------------------------\n";
}

void Produto::imprimir() const{
    cout << "--------------- Produto ------------------\n";
    cout << "Id:"<< id << endl;
    cout << "Custo:" << custo << endl;
    cout << "Preco:" << preco << endl;
    cout << "Estoque:" << estoque << endl;
    cout << "-------------------------------------------\n";
}

void Produto::imprimirResumido() const{
    cout << "[" << id << "," << custo << ","<< preco << "," << estoque <<"] ->";
}

void Produto::copiar(const Produto &outro){
    id = outro.GetId();
    preco = outro.GetPreco();
    custo = outro.GetCusto();
    estoque = outro.GetEstoque();
}

void Produto::SetEstoque(int estoque) {
    this->estoque = estoque;
}

int Produto::GetEstoque() const {
    return estoque;
}

void Produto::SetCusto(double custo) {
    this->custo = custo;
}

double Produto::GetCusto() const {
    return custo;
}

void Produto::SetPreco(double preco) {
    this->preco = preco;
}

double Produto::GetPreco() const {
    return preco;
}

void Produto::SetId(int id) {
    this->id = id;
}

int Produto::GetId() const {
    return id;
}

