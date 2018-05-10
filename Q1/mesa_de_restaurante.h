#ifndef MESA_DE_RESTAURANTE_H
#define MESA_DE_RESTAURANTE_H

#include <iostream>

#include "pedido.h"

using namespace std;

class MesaDeRestaurante{
    private:
        int numero;
        Pedido *pedidos[2];
    
    public:
        MesaDeRestaurante(Pedido pedidos, int numero);
        ~MesaDeRestaurante();

        int getNumero();
        Pedido getPedidos(int numero);

        void setNumero(int numero);
        void setPedidos(Pedido pedidos);

        void adicionarAoPedido(Pedido pedidos);
        double calculaTotal();
        void zerarPedidos();
};

#endif