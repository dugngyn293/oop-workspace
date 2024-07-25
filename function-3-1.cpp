#include <iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) return false;

    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }

 
    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }

    return true;
}
