#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personList;
    
   
    personList.people = new Person[n];
    personList.numPeople = n;
    
   
    for (int i = 0; i < n; ++i) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }
    
    return personList;
}
PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people;

    return copy;
}
