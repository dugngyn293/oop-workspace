#include <iostream>
#include <vector>

enum class GameState {
    WIN,
    LOSE,
    PLAYING
};

class GridItem {
public:
    virtual char getSymbol() const = 0; 
};

class Goal : public GridItem {
public:
    char getSymbol() const override { return 'G'; }
};

class Experiment : public GridItem {
public:
    char getSymbol() const override { return 'E'; }
};

class Scientist : public GridItem {
public:
    char getSymbol() const override { return 'P'; }
};

class Game {
private:
    int width, height;
    Scientist scientist;
    Goal goal;
    std::vector<Experiment> experiments;
    std::vector<std::vector<GridItem*>> grid;
    GameState gameState;
    int playerX, playerY;

    
    void initializeGrid() {
        grid = std::vector<std::vector<GridItem*>>(height, std::vector<GridItem*>(width, nullptr));
        grid[0][0] = &scientist; 
        grid[height - 1][width - 1] = &goal; 
    }

   
    void placeExperiments(const std::vector<std::pair<int, int>>& experimentCoordinates) {
        for (const auto& coord : experimentCoordinates) {
            int x = coord.first;
            int y = coord.second;
            if ((x == 0 && y == 0) || (x == width - 1 && y == height - 1)) continue; 
            Experiment experiment;
            experiments.push_back(experiment);
            grid[y][x] = &experiments.back();
        }
    }

public:
    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates)
        : width(width), height(height), gameState(GameState::PLAYING), playerX(0), playerY(0) {
        initializeGrid();
        placeExperiments(experimentCoordinates);
    }

    bool displayState() {
        if (gameState == GameState::WIN) {
            std::cout << "You win!" << std::endl;
            return true;
        } else if (gameState == GameState::LOSE) {
            std::cout << "You lose :(" << std::endl;
            return true;
        } else {
            std::cout << "Game on" << std::endl;
            return false;
        }
    }

    void movePlayer(int dx, int dy) {
        if (gameState != GameState::PLAYING) return; 

        int newX = playerX + dx;
        int newY = playerY + dy;

        
        if (newX >= 0 && newX < width && newY >= 0 && newY < height) {
            
            grid[playerY][playerX] = nullptr; 
            playerX = newX;
            playerY = newY;
            grid[playerY][playerX] = &scientist; 

           
            if (playerX == width - 1 && playerY == height - 1) {
                gameState = GameState::WIN;
            }

            
            if (dynamic_cast<Experiment*>(grid[playerY][playerX])) {
                gameState = GameState::LOSE;
            }
        }
    }

    void printG;
