#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType { GOAL, EXPERIMENT };

class Scientist;

class Interactable : public GridItem {
private:
    static int activeInteractableCount;

public:
   
    Interactable() : GridItem(0, 0, 0, 0) {
        activeInteractableCount++;
    }

   
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
        activeInteractableCount++;
    }


    virtual ~Interactable() {
        activeInteractableCount--;
    }

   
    virtual bool interact(Scientist* player) = 0;
    virtual InteractableType getType() const = 0;


    static int getActiveInteractableCount() {
        return activeInteractableCount;
    }
};

int Interactable::activeInteractableCount = 0;

#endif
