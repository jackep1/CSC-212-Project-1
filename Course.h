//
// Created by Jack on 6/16/2023.
//
#include "Deliverable.h"
#include <vector>

#ifndef PROJECT_1_COURSE_H
#define PROJECT_1_COURSE_H

class Course {
private:
    string name;
    vector<Deliverable*> deliverables;
public:
    Course(string name);
    string get_name();
    int get_num_deliverables();
    void add_deliverable(Deliverable* deliverable);
    string get_category_grades(string category);
    void remove_deliverable(Deliverable* deliverable);
    double get_grade();
};

#endif //PROJECT_1_COURSE_H
