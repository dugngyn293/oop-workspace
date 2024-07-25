#include <iostream>

extern void print_pass_fail(char grade);

using namespace std;

int main() {
    
    print_pass_fail('B'); 
    print_pass_fail('C'); 
    print_pass_fail('A'); 
    print_pass_fail('D'); 
    print_pass_fail('E'); 
    print_pass_fail('F'); 
    print_pass_fail('G'); 
    print_pass_fail('1'); 

    return 0;
}