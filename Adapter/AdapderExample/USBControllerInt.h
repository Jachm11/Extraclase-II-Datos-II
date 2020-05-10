#ifndef USBCONTROLLERINT_H
#define USBCONTROLLERINT_H
#include <iostream>
using namespace std;

class USBControllerInt
{
public:
    virtual void connectToUSBPort() = 0;
    virtual void use() = 0;
    virtual void disconnect() = 0;
    virtual ~USBControllerInt() {} //virtual destructor
};
#endif // USBCONTROLLERINT_H
