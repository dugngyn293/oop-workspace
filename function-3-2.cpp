#include <iostream>

void bubble_sort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) return 0;

    
    bubble_sort(array, n);

    return array[n / 2];
}