#include "Student.h"

Student::Student(std::string first_name, std::string last_name) {
    this->first_name = first_name;
    this->last_name = last_name;
}

void Student::add_course(Course course) {
    this->courses.push_back(course);
}

void Student::add_deliverable(Deliverable* deliverable, string course) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].get_name() == course) {
            this->courses[i].add_deliverable(deliverable);
            return;
        }
    }
}

void Student::remove_deliverable(Deliverable *deliverable, std::string course) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].get_name() == course) {
            this->courses[i].remove_deliverable(deliverable);
            return;
        }
    }
}

vector<Course> Student::get_course_load() {
    vector<Course> all_courses;
    for (int i = 0; i < this->courses.size(); i++) {
        all_courses.push_back(courses[i]);
    }
    return all_courses;
}

string Student::get_all_sorted_grades(string course) {
    string all_sorted_grades;

    return all_sorted_grades;
}

string Student::get_category_sorted_grades(string course) {
    string category_sorted_grades;

    return category_sorted_grades;
}

string Student::get_grade_by_course(string course) {
    string course_info = course + ": ";
    for (int i = 0; i < this->courses.size(); i++) {
        if (this->courses[i].get_name() == course) {
            course_info += this->courses[i].get_grade();
        }
    }
    return course_info;
}

string Student::get_grade_by_category(std::string category, std::string course) {
    string all_category_info;
    for (int i = 0; i < this->courses.size(); i++) {
        if (this->courses[i].get_name() == course) {
            all_category_info = this->courses[i].get_category_grades(category);
        }
    }
    return all_category_info;
}

string Student::get_all_grades() {
    string courses_with_grades;
    for (int i = 0; i < this->courses.size(); i++) {
        double course_grade_num = courses[i].get_grade();
        string course = std::to_string(course[i]);
        string course_grade = std::to_string(course_grade_num);
        courses_with_grades += course + ": " + course_grade + "\n";
    }
    return courses_with_grades;
}