#include <bits/stdc++.h>

using namespace std;

int *readNumbers() {
    int *arr = new int[10]{0};
    for (int i=0; i<10; i++) {
        std::cin >> arr[i];
    }
    return arr;
};
void printNumbers(int *numbers,int length) {
    for(int i=0;i<length;i++){
        std::cout << i << " " << numbers[i] << std::endl;
    }
};

int secondSmallestSum(int* numbers, int length) {
    int result = length * (length + 1) / 2;
    int array[result];
    int k = 0;

    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            array[k] = sum;
            k++;
        }
    }
    std::sort(array, array + result);

    // Return the second smallest element
    return array[1];
}