#include <iostream>

extern double arrayMin(double* array, int size);

int main() {
    
    double arr[] = {5.6, 2.1, 9.8, 1.4, 7.3};
    int size = sizeof(arr) / sizeof(arr[0]);  

    
    double minValue = arrayMin(arr, size);

    
    std::cout << "Minimum value in the array: " << minValue << std::endl;

    return 0;
}
