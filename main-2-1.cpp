#include <iostream>

extern int min_element(int array[], int n);

int main() {
    // Example usage
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = min_element(arr, size);
    std::cout << "The minimum element in the array is: " << result << std::endl;

    return 0;
}