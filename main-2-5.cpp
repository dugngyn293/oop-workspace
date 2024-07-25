#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
  
    int arr1[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Array 1 is descending: " << std::boolalpha << is_descending(arr1, size1) << std::endl;
    std::cout << "Array 2 is descending: " << std::boolalpha << is_descending(arr2, size2) << std::endl;
    std::cout << "Array 3 is descending: " << std::boolalpha << is_descending(arr3, size3) << std::endl;

    return 0;
}