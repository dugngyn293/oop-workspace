#include <iostream>

extern double weighted_average(int array[], int n);

using namespace std;


int main() {
    int array1[] = {1, 2, 1, 4, 1, 3};
    int array2[] = {5, 5, 5, 5, 5, 5};
    int array3[] = {1, 2, 3, 4, 5, 6};
    int array4[] = {};

    cout << weighted_average(array1, 6) << endl; 
    cout << weighted_average(array2, 6) << endl; 
    cout << weighted_average(array3, 6) << endl; 
    cout << weighted_average(array4, 0) << endl; 
    
    return 0;
}