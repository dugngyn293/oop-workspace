#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    // Example usage
    int arr[] = {2, 5, 9, 2, 9, 9, 5, 2, 9, 5, 9, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    two_five_nine(arr, size);

    return 0;
}