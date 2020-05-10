#include "gamecubetousbadapter.h"

GameCubeToUSBAdapter::GameCubeToUSBAdapter(GameCubeController *newController)
{
    GCcontroller = *newController;
}

void GameCubeToUSBAdapter::connectToUSBPort()
{

 cout<< "Connecting to adapter..."<< endl;
 GCcontroller.connectToGameCubePort();

}

void GameCubeToUSBAdapter:: use()
{
     cout<< "Using gamecube controller with the adapter..."<< endl;
     GCcontroller.use();
}

void GameCubeToUSBAdapter::disconnect()
{
    GCcontroller.disconnect();
}
