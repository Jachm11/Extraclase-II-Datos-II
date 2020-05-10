#include "deliveryperson.h"
#include <iostream>
using namespace std;

DeliveryPerson::DeliveryPerson()
{

}
void DeliveryPerson::deliverOrder(string address)
{
    cout << "Order on its way to:" << address << endl;
    cout << "Your order has arrived!" << endl;
}
