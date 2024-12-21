#pragma once
#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <vector>
#include <string>
#include "D:\pois\Project9\Project9\Person.h"

using namespace std;
class Teacher : public Person {
    vector<int> courses;
public:
    Teacher(int id, string name, string lastname,string email, vector<int> courses);

    void assignTask(int courseId, string taskDescription);
    void displayProfile() const;
 

};
#endif // !TEACHER_H


