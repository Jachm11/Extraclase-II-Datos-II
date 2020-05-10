#include "cajero.h"
#include <iostream>
using namespace std;

Cajero::Cajero()
{
    cout << "hi" << endl;

}

Cajero::recibirPdeido()
{
    cout << "¡Su pedido ha sido confirmado!" << endl;

}

Cajero::facturarPedido(int tarjeta)
{
    cout << "Se ha rebajado de la tarjeta" << tarjeta << endl;
}
