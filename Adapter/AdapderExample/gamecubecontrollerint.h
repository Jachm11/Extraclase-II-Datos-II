#ifndef GAMECUBECONTROLLERINT_H
#define GAMECUBECONTROLLERINT_H
#include <iostream>
using namespace std;

class GameCubeControllerInt
{
public:
    bool connected;
    virtual void connectToGameCubePort() = 0;
    virtual void use() = 0;
    virtual void disconnect() = 0;
    virtual ~GameCubeControllerInt() {} //virtual destructor
};

#endif // GAMECUBECONTROLLERINT_H
