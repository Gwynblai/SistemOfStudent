#include "D:\pois\Project9\Project9\Department.h"

#include <iostream>
#include <string>

using namespace std;


    // �����������, ���������������� ������ ���
    Department::Department(string Name) : Name(Name) {}

    // ����� ��� ���������� ������������� 
    void Department::addTeacher(int teacherId) { 
        cout << "Adding teacher ID " << teacherId << " to department: " << Name << endl;
    }

    // ����� ��� ����������� ������ ���������
    void Department::listSubjects() const {
        cout << "Listing subjects in department: " << Name << endl;
    }

    // ����� ��� ��������� ���������� � ������������
    void Department::getDepartmentInfo() const {
        cout << "Department Name: " << Name << endl;
    }

    // ����� ��� ���������� ������������ ������������


