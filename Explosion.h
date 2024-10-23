#pragma once 
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    public:
    Explosion() {

    }
    Explosion(int x, int y) {
        position = std::make_tuple(x, y);
        type = 'E';
    }
    void apply(GameEntity& entity) {
        entity.setPosition(-1,-1);
        entity.setType('X');
    }

};