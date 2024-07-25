#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0; // Return 0 if the array size is less than 1
    }

    double sum = 0.0;
    bool counted[101] = {false}; // To track whether an element has already been counted (assuming max value 100)

    for (int i = 0; i < n; ++i) {
        if (counted[array[i]]) {
            continue; // Skip already counted elements
        }

        counted[array[i]] = true;
        int num = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i] == array[j]) {
                num++;
            }
        }
        sum += static_cast<double>(array[i] * num) / n;
    }

    return sum;
}