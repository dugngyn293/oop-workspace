#include "GameEntity.h"
#include "Utils.h"
#include "Effect.h" 
#include <iostream>

int main() {
    GameEntity entity1(1,2, 'A');
    GameEntity entity2(2,3, 'B');
    std::cout << Utils::calculateDistance(entity1.getPos(), entity2.getPos()) << std::endl;

    return 0;
}