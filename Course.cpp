#include "Course.h"

Course::Course(std::string name) {
    this->name = name;
}

string Course::get_name() {
    return this->name;
}

int Course::get_num_deliverables() {
    return this->deliverables.size();
}

void Course::add_deliverable(Deliverable *deliverable) {
    deliverables.push_back(deliverable);
}

string Course::get_category_grades(std::string category) {
    // All individual assignment info
    string ind_category_grades;
    // Totals within the category.
    double cat_earned_pts;
    double cat_total_pts;
    for (int i = 0; i < deliverables.size(); i++) {
        // If the deliverable is in the category
        if (deliverables[i]->get_category() == category) {
            // Create a line with name and score/total, add score and total to category sums
            string d_name = deliverables[i]->get_name();
            cat_earned_pts += deliverables[i]->get_grade();
            cat_total_pts += deliverables[i]->get_max_pts();
            string d_grade = std::to_string(deliverables[i]->get_grade());
            string d_total = std::to_string(deliverables[i]->get_max_pts());
            string line = d_name + ": " + d_grade + "/" + d_total + "\n";
            ind_category_grades += line;
        }
    }
    // Create final string with assignment grades plus total category grade
    string final_earned = std::to_string(cat_earned_pts);
    string final_total = std::to_string(cat_total_pts);
    string cat_totals = category + ": " + final_earned + "/" + final_total + "\n";
    string all_category_info = ind_category_grades + cat_totals;
    return all_category_info;
}

void Course::remove_deliverable(Deliverable *deliverable) {
    int del_idx = 0;
    for (int i = 0; i < deliverables.size(); i++) {
        if (deliverables[i] == deliverable) {
            del_idx = i;
            break;
        }
    }
    deliverables.erase(deliverables.begin() + del_idx - 1);
}

double Course::get_grade() {
    double total_points = 0;
    double earned_points = 0;
    for (int i = 0; i < deliverables.size(); i++) {
        double total_del_pts = deliverables[i]->get_max_pts();
        double earned_del_pts = deliverables[i]->get_grade();
        total_points += total_del_pts;
        earned_points += earned_del_pts;
    }
    double course_grade = (100 * (earned_points / total_points));
    return course_grade;
}