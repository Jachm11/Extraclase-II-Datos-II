#include "usbcontroller.h"

USBController::USBController()
{

}

void USBController::connectToUSBPort()
{
 connected = true;
 cout<< "SUCCESFULLY CONNECTED"<< endl;

}

void USBController:: use()
{
    if (connected)
    {
        cout<< "You are know playing with a USB controller!"<< endl;
    }else
    {
        cout<< "The controller is not connected"<< endl;
    }
}

void USBController::disconnect()
{
    connected = true;
    cout<< "SUCCESFULLY DISCONNECTED"<< endl;
}
