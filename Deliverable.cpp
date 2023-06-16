#include "Deliverable.h"

Deliverable::Deliverable(string name, string category) {
    this->name = name;
    this->category = category;
    this->grade = 0;
    this->max_points = 0;
}

Deliverable::Deliverable(string name, string category, double grade, double max_points) {
    this->name = name;
    this->category = category;
    this->grade = grade;
    this->max_points = max_points;
}

void Deliverable::set_grade(double grade) {
    this->grade = grade;
}

string Deliverable::get_name() {
    return this->name;
}

string Deliverable::get_category() {
    return this->category;
}

double Deliverable::get_grade() {
    return this->grade;
}

double Deliverable::get_max_pts() {
    return this->max_points;
}

double Deliverable::get_percentage() {
    return 100 * (this->grade / this->max_points);
}