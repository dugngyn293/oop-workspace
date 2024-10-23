#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
  
    GridItem item1(1, 2, 3, 4);
    GridItem item2(5, 6, 3, 4);

    
    item1.setCoordinates(3, 4);
    auto coords = item1.getCoordinates();
    std::cout << "Item1 Coordinates: (" << coords.first << ", " << coords.second << ")\n";

    
    int distance = Helper::manhattanDistance(item1.getCoordinates(), item2.getCoordinates());
    std::cout << "Manhattan Distance between item1 and item2: " << distance << "\n";

    
    std::cout << "Active GridItem count: " << GridItem::getActiveGridItemCount() << "\n";

    return 0;
}
