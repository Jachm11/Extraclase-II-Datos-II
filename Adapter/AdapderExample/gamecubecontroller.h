#ifndef GAMECUBECONTROLLER_H
#define GAMECUBECONTROLLER_H
#include "gamecubecontrollerint.h"


class GameCubeController : public GameCubeControllerInt
{
private:

    bool connected;

public:
    GameCubeController();
    void connectToGameCubePort() override;
    void use() override;
    void disconnect() override;

};

#endif // GAMECUBECONTROLLER_H
