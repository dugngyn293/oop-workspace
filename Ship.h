#pragma once
#include "GameEntity.h"

class Ship : public GameEntity {
    public:
    Ship() {

    }
    Ship(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'S';
    }
    void move(int dx, int dy) {
        position = std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
    }
};