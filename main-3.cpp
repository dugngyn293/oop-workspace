#include "Game.h"
#include <iostream>

int main() {
    Game game;
    game.initGame(3,4,10,10);
    game.gameLoop(8, 1);
    return 0;
}