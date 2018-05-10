#include <iostream>

#include <pedido.h>

using namespace std;

Pedido::Pedido(int numero, int quantidade, double preco, string descricao){
    this->numero = numero;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->preco = preco;
}

Pedido::~Pedido(){}

void Pedido::setNumero(int numero) {
    this->numero = numero;
}

void Pedido::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

void Pedido::setPreco(double preco){
    this->preco = preco;
}

void Pedido::setDescricao(string descricao) {
    this->descricao = descricao;
}

int Pedido::getNumero(){
    return this->numero;
}

int Pedido::getQuantidade(){
    return this->quantidade;
}

double Pedido::getPreco(){
    return this->preco;
}

string Pedido::getDescricao(){
    return this->descricao;
}
