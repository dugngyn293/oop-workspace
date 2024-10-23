#include <iostream>
using namespace std;

#include "GridItem.hpp"
#include "Helper.hpp"
#include "Scienctist.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

int main() {
    Cell cell1(1,3,'C');
    Cell cell2(4,7,'C');
    
    std::cout << "Distance between Cell 1 and Cell 2 is " << endl;
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << endl;

    cout << "--------------" << endl;

    Trap trap(1,4);
    Character player(1,3);

    cout << "Trap's current state is " << trap.isActive() << endl;

    cout << "Player's current type is: " << player.getType() << endl;
    cout << "Player's current position is: " << get<0>(player.getPos()) << ", "<< get<1>(player.getPos()) << endl;

    player.move(1,0);

    cout << "Player's current type is: " << player.getType() << endl;
    cout << "Player's current position is: " << get<0>(player.getPos()) << ", "<< get<1>(player.getPos()) << endl;

    trap.apply(player);

    cout << "Player's current type is: " << player.getType() << endl;
    cout << "Player's current position is: " << get<0>(player.getPos()) << ", "<< get<1>(player.getPos()) << endl;

    cout << "Trap's current state is " << trap.isActive() << endl;


    cout << "--------------" << endl;
    

    Game game;

    game.initGame(1,1,3,4);

    cout << "Game starts!" << endl;

    game.gameLoop(10,3);

    return 0;
}