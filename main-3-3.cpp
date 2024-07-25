#include <iostream>

extern double weighted_average(int array[], int n);

using namespace std;


int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    double result = weighted_average(array, n);
    printf("Weighted Average: %.2f\n", result);
    return 0;
}