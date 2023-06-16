#include "Deliverable.h"
#include "Course.h"
#include "Student.h"
#include "Interface.cpp"

int main() {

    int task = choose_functionality();

    // If adding a student
    if (task == 1) {
        Student student = create_student_profile();
    // If changing student details
    } else if (task == 2) {

    // If getting student grades
    } else if (task == 3) {

    // Otherwise quit program
    } else {
        // break;
    }
}
