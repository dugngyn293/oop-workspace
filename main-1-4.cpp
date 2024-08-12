#include "Person.h"
#include <iostream>

PersonList shallowCopyPersonList(PersonList pl);
PersonList createPersonList(int n);

int main() {
    int n = 5;
    PersonList originalList = createPersonList(n);
    PersonList copiedList = shallowCopyPersonList(originalList);

    
    originalList.people[0].name = "Modified Name";

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", " << originalList.people[i].age << std::endl;
    }

    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    return 0;
}
