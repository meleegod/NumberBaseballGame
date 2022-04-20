#include <iostream>
#include "BaseballGame.h"

using namespace std;

int main()
{
    BaseballGame game;

    while(!gmae.isGameDone()){
        game.initialize();

        while(game.getNumOfStrike() < 3) {
            game.input();
            game.judge();
            game.output();
        }   
    }
    return 0;
}