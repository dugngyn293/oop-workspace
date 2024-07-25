#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0; // Return 0 if the array size is less than 1
    }

    double weighted_sum = 0.0;

    // Calculate the weighted sum by dividing each element's weighted contribution by n
    for (int i = 0; i < n; ++i) {
        weighted_sum += static_cast<double>(array[i]) / n;
    }

    // Return the weighted average
    return weighted_sum;
}