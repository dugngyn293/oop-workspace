#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    int number1 = 4;
    
    int arr2[] = {10, 20, 30,10,10};
    int size2 = 5;
    int number2 = 10;
    
    int arr3[] = {0};
    int size3 = 1; 
    int number3 = 0;


    std::cout << "the number is:  " << num_count(arr1, size1, number1) << std::endl;
    std::cout << "the number is:  " << num_count(arr2, size2, number2) << std::endl;
    std::cout << "the number is:  " << num_count(arr3, size3, number3) << std::endl;
    
    return 0;

}