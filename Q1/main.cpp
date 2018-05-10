#include <iostream>

#include "restaurante_caseiro.h"
#include "mesa_de_restaurante.h"
#include "pedido.h"

using namespace std;

int main() {
    Pedido pedido1 = Pedido(1, 1, 10.0, "PF com duas opcoes de carne");
    Pedido pedido2 = Pedido(2, 2, 4.0, "Suco de laranja");

    MesaDeRestaurante mesa = MesaDeRestaurante(pedido1, 1);
    MesaDeRestaurante mesa2 = MesaDeRestaurante(pedido1, 2);

    mesa2.adicionarAoPedido(pedido2);

    cout << "Total mesa1: " <<  mesa.calculaTotal() << endl;

    return 0;
}
