#include <iostream>

#include <restaurante_caseiro.h>
#include <mesa_de_restaurante.h> 
#include <pedido.h>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(MesaDeRestaurante mesa){
    this->mesa[mesa.getNumero()] = &mesa;
}

RestauranteCaseiro::~RestauranteCaseiro(){}

MesaDeRestaurante RestauranteCaseiro::getMesa(int numero){
    return *this->mesa[numero];
}

void RestauranteCaseiro::setMesa(MesaDeRestaurante mesa){
    this->mesa[mesa.getNumero()] = &mesa;
}

void RestauranteCaseiro::adicionarAoPedido(Pedido pedidos, int numero){
    this->mesa[numero]->adicionarAoPedido(pedidos);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    int soma = 0;
    int i = 0;

    for(i = 0; i < 10; i++){
        soma += mesa[i]->calculaTotal();
    }

    return soma;
}
