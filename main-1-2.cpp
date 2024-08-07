#include <iostream> 

extern void modifyArray(double* , int , double );

int main(void) {
    double array[] = {1.1, 0, 5, -3, 5};
    int size = sizeof(array) / sizeof(double);
    double value = 1.5;
    modifyArray(array, size, value);
    return 0;
}