#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity {
    protected:
    std::tuple<int, int> position;
    char type;
    public:
    GameEntity() {

    }
    GameEntity(int x, int y, char type) {
        position = std::make_tuple(x, y);
        this->type = type;
    }

    std::tuple<int, int> getPos() {
        return position;
    }
    char getType() {
        return type;
    }

    virtual void move(int dx, int dy) {
        
    }
    void setPosition (int x, int y) {
        position = std::make_tuple(x, y);
    }
    void setType (char type) {
        this->type = type;
    }
};


#endif