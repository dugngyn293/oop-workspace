#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;

    const int MAX_VALUES = 100;  // assuming the array does not contain more than 100 distinct values
    int distinct_values[MAX_VALUES] = {0};
    int frequencies[MAX_VALUES] = {0};
    int distinct_count = 0;

    // Count the occurrences of each distinct element
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < distinct_count; j++) {
            if (distinct_values[j] == array[i]) {
                frequencies[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            distinct_values[distinct_count] = array[i];
            frequencies[distinct_count] = 1;
            distinct_count++;
        }
    }

    double weighted_sum = 0.0;
    for (int i = 0; i < distinct_count; i++) {
        weighted_sum += distinct_values[i] * frequencies[i] / static_cast<double>(n);
    }

    return weighted_sum;
}