#ifndef GAMECUBETOUSBADAPTER_H
#define GAMECUBETOUSBADAPTER_H
#include "usbcontroller.h"
#include "gamecubecontroller.h"

class GameCubeToUSBAdapter: public USBControllerInt
{
private:
    GameCubeController GCcontroller;

public:
    GameCubeToUSBAdapter(GameCubeController *newController);
    void connectToUSBPort() override;
    void use() override;
    void disconnect() override;
};

#endif // GAMECUBETOUSBADAPTER_H
