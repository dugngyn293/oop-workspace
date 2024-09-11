#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Course.h"
#include "Gradebook.h"
#include <string>

class University {
    private:
    std::string name;
    std::string location;
    Course* courses;
    Gradebook* current_gradebook;
    int size;
    int current_size;
    public:
    University();
    University(std::string name, std::string location, int size);
    void addCourse(int id, std::string name);
};

#endif