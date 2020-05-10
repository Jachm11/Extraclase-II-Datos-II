#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef()
{

}

void Chef::cookOrder(int number)
{
    cout << "Cooking order number " << number << endl;
}

void Chef::packOrder(string name){

    cout << "Packing "<< name <<"'s order" << endl;

}
