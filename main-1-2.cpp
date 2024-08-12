#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 5; 
    PersonList list = createPersonList(n);
    
  
    for (int i = 0; i < list.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << list.people[i].name 
                  << ", " << list.people[i].age << std::endl;
    }
    
    // Clean up the dynamically allocated array within the PersonList
    delete[] list.people;
    
    return 0;
}
