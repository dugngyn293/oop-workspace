#include <iostream>
using namespace std;

#include "GridItem.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

int main() {
  
    int gridWidth = 4;
    int gridHeight = 3;

  
    Scientist player(gridWidth, gridHeight);

    
    Goal goal(gridWidth, gridHeight);
    Experiment experiment1(1, 1, gridWidth, gridHeight);
    Experiment experiment2(2, 2, gridWidth, gridHeight);

   
    std::cout << "Moving player to (1, 1): " << (player.move(1, 1) ? "Success" : "Failed") << "\n";

  
    std::cout << "Interacting with experiment1: " << (experiment1.interact(&player) ? "Scientist exhausted" : "Experiment done") << "\n";

    
    std::cout << "Moving player to (2, 2): " << (player.move(1, 1) ? "Success" : "Failed") << "\n";

    
    std::cout << "Interacting with experiment2: " << (experiment2.interact(&player) ? "Scientist exhausted" : "Experiment done") << "\n";

    std::cout << "Scientist's experiment count: " << player.getExperimentCount() << "\n";
    std::cout << "Moving player to the Goal: " << (player.move(1, 1) ? "Success" : "Failed") << "\n";
    std::cout << "Interacting with Goal: " << (goal.interact(&player) ? "Game Won!" : "Game Lost") << "\n";

    Game game;

    game.initGame(1,1,3,4);

    cout << "Game starts!" << endl;

    game.gameLoop(10,3);

    return 0;
}