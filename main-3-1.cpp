#include <iostream>

extern bool is_fanarray(int array[], int n);

using namespace std;


int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {2, 4, 4, 2};
    int arr3[] = {1, 2, 1, 2, 1};
    int arr4[] = {1, 3, 5, 4, 2};

    cout << (is_fanarray(arr1, 5) ? "true" : "false") << endl; // Output: true
    cout << (is_fanarray(arr2, 4) ? "true" : "false") << endl; // Output: true
    cout << (is_fanarray(arr3, 5) ? "true" : "false") << endl; // Output: false
    cout << (is_fanarray(arr4, 5) ? "true" : "false") << endl; // Output: false

    return false;
}