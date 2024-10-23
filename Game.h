#pragma once
#include "GameEntity.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>
#include <iostream>

class Game {
    private:
    std::vector <GameEntity*> entities;
    int numShips;
    int numMines;
    public:
    Game() {

    }
    std::vector<GameEntity*> get_entities() {
        return entities;
    }

    void set_entities(std::vector<GameEntity*> new_entites) {
        entities = new_entites;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        this->numShips = numShips;
        this->numMines = numMines;
        for (int i = 0; i < numShips; i++) {
            entities.push_back(new Ship(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
        }
        for (int i = 0; i < numMines; i++) {
            entities.push_back(new Mine(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight))));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int i = 0; i < maxIterations; i++) {
            for (int j = 0; j < numShips; j++) {
                Ship *ship = dynamic_cast<Ship *>(entities[j]);
                if (ship != nullptr) {
                    if (ship->getType() != 'X') {
                        ship->move(0,1);
                    }
                    
                }
            }
            for (int k = numShips; k < entities.size(); k++) {
                for (int h = 0; h < numShips; h++) {
                    if (entities[h]->getType() != 'X' && entities[k]->getType() != 'X' && Utils::calculateDistance(entities[h]->getPos(), entities[k]->getPos()) < mineDistanceThreshold) { // distance
                        Mine* mine = dynamic_cast<Mine *>(entities[k]);
                        if (mine != nullptr) {
                            Explosion new_explosion = mine->explode();
                            new_explosion.apply(*entities[h]);
                            numMines--;
                            numShips--;
                        }
                    }
                }
            }
            if (numShips == 0) {
                return;
            }
        }
    }
    ~Game() {
        for (int i = 0; i < entities.size(); i++) {
            delete entities[i];
        }
        entities.clear();
    }
};