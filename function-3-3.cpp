#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    double sum = 0.0;
    int frequencies[101] = {0}; 

    for (int i = 0; i < n; i++) {
        frequencies[array[i]]++;
    }

    for (int i = 0; i < 101; i++) {
        if (frequencies[i] > 0) {
            sum += i * frequencies[i];
        }
    }

    return sum /static_cast<double>(n);
}