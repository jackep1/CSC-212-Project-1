#include <string>
using namespace std;

#ifndef PROJECT_1_DELIVERABLE_H
#define PROJECT_1_DELIVERABLE_H

class Deliverable {
private:
    string name;
    string category;
    double grade;
    double max_points;

public:
    Deliverable(string name, string category);
    Deliverable(string name, string category, double grade, double max_points);
    void set_grade(double grade);
    string get_name();
    string get_category();
    double get_grade();
    double get_max_pts();
    double get_percentage();
};

#endif //PROJECT_1_DELIVERABLE_H