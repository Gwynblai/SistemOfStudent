#pragma once
#ifndef EXAM_H
#define EXAM_H
#include <iostream>
#include <vector>
#include <string>
#include "D:\pois\Project9\Project9\Entity.h"
#include "D:\pois\Project9\Project9\Student.h"
#include "D:\pois\Project9\Project9\Teacher.h"
using namespace std;
class Exam : public Entity {
private:
    string subject; // �������� ��������
    Teacher* teacher;
    vector<Student*> students; // ���������� �� ������� ���������
public:
    Exam(int id, string subject, Teacher* teacher);


    // �������� �������� � ��������
    void addStudent(Student*student);


    // ������� ���������� �� ��������
    void displayExamInfo() const;

};
#endif // !EXAM_H


