#include "GameEntity.h"
#include "Utils.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include <iostream>

int main() {
    GameEntity *ship = new Ship(2, 3);
    GameEntity *mine = new Mine(5, 7);
    std::cout << Utils::calculateDistance(ship->getPos(), mine->getPos()) << std::endl;
    Ship new_ship(std::get<0>(Utils::generateRandomPos(10, 10)), std::get<1>(Utils::generateRandomPos(10, 10)));
    Mine new_mine(std::get<0>(Utils::generateRandomPos(10, 10)), std::get<1>(Utils::generateRandomPos(10, 10)));
    std::cout << std::get<0>(new_ship.getPos()) << " " << std::get<1>(new_ship.getPos()) << std::endl;
    std::cout << std::get<0>(new_mine.getPos()) << " " << std::get<1>(new_mine.getPos()) << std::endl;
    if (Utils::calculateDistance(new_ship.getPos(), new_mine.getPos()) < 1) {
        Explosion new_explosion = new_mine.explode();
        std::cout << "Exploded!" << std::endl;
        std::cout << std::get<0>(new_explosion.getPos()) << " " << std::get<1>(new_explosion.getPos()) << std::endl;
    }
    else {
        std::cout << "no collision" << std::endl;
    }
    return 0;
}