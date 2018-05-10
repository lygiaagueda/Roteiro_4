#ifndef RESTAURANTE_CASEIRO_H
#define RESTAURANTE_CASEIRO_H

#include <iostream>

#include "mesa_de_restaurante.h"
#include "pedido.h"

using namespace std;

class RestauranteCaseiro{
    private:
        MesaDeRestaurante *mesa[2];
    
    public:
        RestauranteCaseiro(MesaDeRestaurante mesa);
        ~RestauranteCaseiro();

        MesaDeRestaurante getMesa(int numero);
        void setMesa(MesaDeRestaurante mesa);

        void adicionarAoPedido(Pedido pedidos, int numero);
        double calculaTotalRestaurante();
};

#endif
