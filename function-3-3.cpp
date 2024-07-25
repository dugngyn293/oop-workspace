#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0; // Return 0 if the array size is less than 1
    }

    std::unordered_map<int, int> frequencies; // To store the frequency of each element
    double sum = 0.0;

    // Count the frequency of each element in the array
    for (int i = 0; i < n; ++i) {
        frequencies[array[i]]++;
    }

    // Calculate the weighted sum
    for (const auto& entry : frequencies) {
        int value = entry.first;
        int count = entry.second;
        sum += value * static_cast<double>(count);
    }

    // Return the weighted average
    return sum / static_cast<double>(n);
}