#include <iostream>

#include "mesa_de_restaurante.h" 
#include "pedido.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(Pedido pedidos, int numero){

    this->numero = numero;
    this->pedidos[pedidos.getNumero()] = &pedidos;
}

MesaDeRestaurante::~MesaDeRestaurante(){}

Pedido MesaDeRestaurante::getPedidos(int numero){
    return *this->pedidos[numero];
}

int MesaDeRestaurante::getNumero(){
    return this-> numero;
}

void MesaDeRestaurante::setPedidos(Pedido pedidos){
    this->pedidos[pedidos.getNumero()] = &pedidos;
}

void MesaDeRestaurante::setNumero(int numero){
    this->numero = numero;
}

void MesaDeRestaurante::adicionarAoPedido(Pedido pedidos){
    setPedidos(pedidos);
}

double MesaDeRestaurante::calculaTotal(){
    int somaPreco = 0;
    int somaQuantidade = 0;
    int i = 0;

    for(i = 0; i < 10; i++){
        somaPreco += pedidos[i]->getPreco();
        somaQuantidade += pedidos[i]->getQuantidade();
    }

    return somaPreco * somaQuantidade;
}

void MesaDeRestaurante::zerarPedidos(){
    int i = 0;

    for(i = 0; i < 10; i++){
        pedidos[i]->setNumero(0);
        pedidos[i]->setQuantidade(0);
        pedidos[i]->setPreco(0);
        pedidos[i]->setDescricao("");
    }
}