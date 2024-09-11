#include "University.h"
#include "Gradebook.h"
#include "Course.h"
#include "Grade.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include <iostream>

int main() {
    
    University adelaide("Adelaide", "North Terrace", 1);
    adelaide.addCourse(0001, "computer science");
    Student gojo("Gojo", 1);
    Course compsci("computer science", 0001, 1);
    compsci.addPerson(&gojo);
    return 0;
}