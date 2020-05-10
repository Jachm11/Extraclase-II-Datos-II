#include "cashier.h"
#include <iostream>
using namespace std;
Cashier::Cashier()
{

}

void Cashier::receiveOrder()
{
    cout << "Order confirmed!"  << endl;
}

void Cashier::chargeOrder(int card)
{
    cout << "Your order has been charged to the credit card:" << card << endl;
}
