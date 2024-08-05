#include <iostream>

extern double arrayMax(double* arr, int size);

int main() {
    // Create a double array
    double myArray[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the printArray function
    printArray(myArray, size);

    // Call the arrayMax function and print the result
    double maxVal = arrayMax(myArray, size);
    std::cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}
