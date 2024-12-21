#include "D:\pois\Project9\Project9\Student.h"


Student::Student(int id, string name, string email, string lastname, int course, int groupNumber)
    : Person(id, name, email, lastname), course(course), groupNumber(groupNumber) {}

void Student::displayProfile() const {
    cout << "Name: " << name << ",Lastname: " << lastname << ", Email: " << email << ",ID: " << id<<",Course: "<<course<<",Group: "<< groupNumber << endl;
}