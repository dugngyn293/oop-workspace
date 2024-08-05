#include <iostream>

// Function to print the contents of an array
void printArray(double* arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to find the maximum value in an array
double arrayMax(double* arr, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Array size must be greater than 0.");
    }

    double maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}