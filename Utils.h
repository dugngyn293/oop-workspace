#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include "stdlib.h"
#include "math.h"

class Utils {
    public:
    // remember rand() % 100 + a: randomly generate number from a to a+100
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::tuple<int, int> randomPosition = std::make_tuple(rand() % gridWidth, rand() % gridHeight);
        return randomPosition;
    }
    // sqrt, pow(a, 2) means a square
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        double distance = sqrt(pow(std::get<0>(pos1)-std::get<0>(pos2),2)+pow(std::get<1>(pos1)-std::get<1>(pos2),2));
        return distance;
    }
};


#endif