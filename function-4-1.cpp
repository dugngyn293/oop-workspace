#include <iostream>

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
    for(int i=0; i<length; i++) {
        for (int j ; j<length; j++) {
            sum+=numbers[j];
            cout << sum << ",";
        }
        j++;
        sum = 0;
    }
}