#include <iostream>
#include <cmath> 

using namespace std;

int array_min(int integer[], int length) {
    int min = integer[0];
    for(int i=0 ; i<length; i++) {
        if (integer[i]<= min) {
            min = integer[i];
        }
    }
    return min;
}
int array_max(int integer[], int length) {
    int max = integer[0];
    for(int i=0 ; i<length; i++) {
        if (integer[i]>= max) {
            max = integer[i];
        }
    }
    return max;
}
int sum_min_max(int integer[], int length) {
    if (length<=0) {
        return -1;
    } 
    return array_max(integer,length) + array_min(integer,length);
}