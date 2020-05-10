#include "implementfacade.h"
#include "cashier.h"
#include "chef.h"
#include "deliveryperson.h"

ImplementFacade::ImplementFacade()
{

}

void ImplementFacade::order()
{

    cout << "Please enter the following information"<< endl;

    cout << "Name: "<< endl;
    cin >> name;
    cout << "Credit card number: "<< endl;
    cin >> card;
    cout << "Address: "<< endl;
    cin >> address;
    cout << "Choose your pizza: 1- Jam  2-Pepperonni  3-Beef" << endl;
    cin >> number;

    Cashier cash;
    cash.receiveOrder();
    cash.chargeOrder(number);

    Chef chef;
    chef.cookOrder(card);
    chef.packOrder(name);


    DeliveryPerson deliv;
    deliv.deliverOrder(address);



}
