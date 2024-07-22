
#include <iostream>

int array_sum(int array[], int n) {
    // If n is less than 1, return 0 as per the requirement
    if (n < 1) {
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}