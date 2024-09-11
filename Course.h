#ifndef GRADE_H
#define GRADE_H
#include <string>
#include "Person.h"

class Course {
    private:
    std::string name;
    int id;
    Person** persons;
    int size;
    int current_size;
    public:
    Course();
    Course(std::string name, int id, int size);
    void addPerson(Person* new_person);
    ~Course();
};

#endif