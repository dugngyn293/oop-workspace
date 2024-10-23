#pragma once
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
    public:
    Mine() {
        
    }
    Mine(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'M';
    }
    Explosion explode() {
        type = 'X';
        Explosion new_explosion(std::get<0>(position), std::get<1>(position));
        return new_explosion;
    }
};