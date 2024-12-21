#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
#include <string>
#include "D:\pois\Project9\Project9\Person.h"
using namespace std;

class Student : public Person {
protected:
    int course; // ����
    int groupNumber; // ����� ������
public:
    // ����������� � ����������� ��� ���� �����
    Student(int id, string name, string email, string lastname, int course, int groupNumber);


    // ������� ��� ����� �����


    // ��������������� ������ displayProfile ��� ����������� ���������� � ��������
    void displayProfile() const override;
 



};
#endif // !STUDENT_H


