#include <iostream>

extern int count_evens(int number);

int main( ) {
    
    int num = 10;

    int result = count_evens(num);
    std::cout << "Number of even numbers between 1 and " << num << " (inclusive): " << result << std::endl;

    return 0;
}