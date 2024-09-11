#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
// ngu

class Student : public Person {
    private:
    int id;
    public:
    Student();
    Student(std::string name, int id);
};


#endif