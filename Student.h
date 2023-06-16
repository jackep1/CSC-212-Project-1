//
// Created by Jack on 6/16/2023.
//
#include "Deliverable.h"
#include "Course.h"

#ifndef PROJECT_1_STUDENT_H
#define PROJECT_1_STUDENT_H

class Student {
private:
    string first_name;
    string last_name;
    vector<Course> courses;
public:
    Student(string first_name, string last_name);
    void add_course(Course course);
    void add_deliverable(Deliverable* deliverable, string course);
    void remove_deliverable(Deliverable* deliverable, string course);
    vector<Course> get_course_load();
    string get_all_sorted_grades(string course);
    string get_category_sorted_grades(string course);
    string get_grade_by_course(string course);
    string get_grade_by_category(string category, string course);
    string get_all_grades();
};

#endif //PROJECT_1_STUDENT_H
