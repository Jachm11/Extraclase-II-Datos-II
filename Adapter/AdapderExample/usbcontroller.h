#ifndef USBCONTROLLER_H
#define USBCONTROLLER_H
#include "USBControllerInt.h"

class USBController : public USBControllerInt
{

private:

    bool connected;


public:
    USBController();
    void connectToUSBPort() override;
    void use() override;
    void disconnect() override;
};

#endif // USBCONTROLLER_H
