#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    
    int arr2[] = {10, 20, 30};
    int size2 = 3;
    
    int arr3[] = {-1, 0, 1};
    int size3 = 0; 

    
    std::cout << "Sum of arr1: " << array_sum(arr1, size1) << std::endl;
    std::cout << "Sum of arr2: " << array_sum(arr2, size2) << std::endl;
    std::cout << "Sum of arr3: " << array_sum(arr3, size3) << std::endl;
    
    return 0;
}