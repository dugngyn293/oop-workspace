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

int secondSmallestSum(int *numbers,int length) {
    int sum =0;
    int j=0;
    int result = length*(length+1)/2;
    int array[result]
    int k =0;
    for(int i=0; i<length; i++) {
        for (int j ; j<length; j++) {
            sum+=numbers[j];
            array[k] = sum;
            k++;
        }
        j++;
        sum = 0;
    }
    sort(array.begin(), array.end());
    return array[1];
    
}