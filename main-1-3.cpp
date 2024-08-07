#include <iostream>

extern double* duplicateArray(double* array, int size);

int main() {
   
    double originalArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);

 
    double* duplicatedArray = duplicateArray(originalArray, size);

 
    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Duplicated Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << duplicatedArray[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to free the dynamically allocated memory
    delete[] duplicatedArray;

    return 0;
}