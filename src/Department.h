#pragma once
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>

using namespace std;

class Department {
protected:
    string Name;

public:
    // �����������, ���������������� ������ ���
    Department(string Name);

    // ����� ��� ���������� �������������
    void addTeacher(int teacherId);


    // ����� ��� ����������� ������ ���������
    void listSubjects() const;


    // ����� ��� ��������� ���������� � ������������
    void getDepartmentInfo() const;


    // ����� ��� ���������� ������������ ������������

};
#endif // !DEPARTMENT_H


