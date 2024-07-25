#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main () {

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int size = 4;

    int result = sum_two_arrays(arr1, arr2, size);
    std::cout << "Sum of both arrays: " << result << std::endl;

    return 0;
}