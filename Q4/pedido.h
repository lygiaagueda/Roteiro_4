#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
using namespace std;

class Pedido{
    private:
        int numero;
        int quantidade;
        double preco;
        string descricao;

    public:
        Pedido(int numero, int quantidade, double preco, string descricao);
        ~Pedido();

        int getNumero();
        int getQuantidade();
        double getPreco();
        string getDescricao();
        
        void setNumero(int numero);
        void setQuantidade(int quantidade);
        void setPreco(double preco);
        void setDescricao(string quantidade);    
};

#endif