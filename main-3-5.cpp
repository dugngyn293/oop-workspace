#include <iostream>

extern double sum_even(double array[], int n);

using namespace std;

int main() {
    double array1[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double array2[] = {10.0, 20.0, 30.0};
    double array3[] = {7.7, 8.8};
    double array4[] = {};

    cout << "Sum of even positions in array1: " << sum_even(array1, 5) << endl; 
    cout << "Sum of even positions in array2: " << sum_even(array2, 3) << endl; 
    cout << "Sum of even positions in array3: " << sum_even(array3, 2) << endl; 
    cout << "Sum of even positions in array4: " << sum_even(array4, 0) << endl; 
    return 0;
}