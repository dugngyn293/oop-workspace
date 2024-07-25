#include <iostream>

extern int median_array(int array[], int n) ;

using namespace std;

int main() {
    int array1[] = {3, 5, 2, 1, 4};
    int array2[] = {1, 2, 3, 4};
    int array3[] = {7};
    int array4[] = {};

    cout << median_array(array1, 5) << endl; // Output: 3
    cout << median_array(array2, 4) << endl; // Output: 0
    cout << median_array(array3, 1) << endl; // Output: 7
    cout << median_array(array4, 0) << endl; // Output: 0

    return 0;
}