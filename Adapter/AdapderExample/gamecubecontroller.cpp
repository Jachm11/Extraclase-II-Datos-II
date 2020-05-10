#include "gamecubecontroller.h"

GameCubeController::GameCubeController()
{

}

void GameCubeController::connectToGameCubePort()
{
 connected = true;
 cout<< "SUCCESFULLY CONNECTED"<< endl;

}

void GameCubeController:: use()
{
    if (connected)
    {
        cout<< "You are know playing with a gamecube controller!"<< endl;
    }else
    {
        cout<< "The controller is not connected"<< endl;
    }
}

void GameCubeController::disconnect()
{
    connected = true;
    cout<< "SUCCESFULLY DISCONNECTED"<< endl;
}
