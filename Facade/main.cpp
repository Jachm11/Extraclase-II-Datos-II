
#include "cashier.h"
#include "chef.h"
#include "deliveryperson.h"
#include "implementfacade.h"
#include <iostream>
using namespace std;

int main()
{


    /*int i;
    cout << "Please enter an integer value: ";
    cin >> i;


    Cashier cash;
    cash.receiveOrder();
    cash.chargeOrder(2);

    Chef chef;
    chef.cookOrder(5);
    chef.packOrder("Nati");


    DeliveryPerson deliv;
    deliv.deliverOrder("San Jose");*/

    ImplementFacade fac;
    fac.order();




    return 0;
}
