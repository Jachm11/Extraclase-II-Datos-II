#include "mainwindow.h"
#include "gamecubetousbadapter.h"
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{

   class test{

   public:
       void playOnGameCube(GameCubeController *controller)
       {
           controller->connectToGameCubePort();
           controller->use();
       }

        void playOnPC(USBControllerInt *controller)
        {
            controller->connectToUSBPort();
            controller->use();
        }

   };

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    test test;
    GameCubeController *purpleGameCubeColler = new GameCubeController;
    USBController *blackUSBController = new USBController;

    cout << "Using USB controller on a PC"<< endl;
    test.playOnPC(blackUSBController);

    cout <<"\n" << "Using Gamecube controller on a GameCube console"<< endl;
    test.playOnGameCube(purpleGameCubeColler);

    cout <<"\n" << "Using a Gamecube controller on a PC"<< endl;
    GameCubeToUSBAdapter *adapter = new GameCubeToUSBAdapter(purpleGameCubeColler);
    test.playOnPC(adapter);


    return a.exec();
}
