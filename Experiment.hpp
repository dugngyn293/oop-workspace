#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP

#include "Interactable.hpp"
#include "Scientist.hpp"
#include "Helper.hpp"

class Experiment : public Interactable {
public:

    Experiment(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    
    bool interact(Scientist* player) override {
        if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0) {
            player->runExperiment();
            if (player->getExperimentCount() > 3) {
                return true;  
            }
            return false;
        }
        return false; 
    }

   
    InteractableType getType() const override {
        return EXPERIMENT;
    }
};

#endif // EXPERIMENT_HPP
