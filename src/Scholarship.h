#pragma once
#ifndef SCHOLARSHIP_H
#define SCHOLARSHIP_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Scholarship {
    int studentId;
    string scholarshipType; // ��� ���������, ��������, "�������������", "����������"
    float amount; // ����� ���������
    bool isEligible; // ������� �� ���������

public:
    // �����������
    Scholarship(int studentId, const string& scholarshipType, float amount);


    // �������� ����� �� ���������


    // �������� ���������� � ���������
    void displayScholarshipInfo() const;

};
#endif // !SCHOLARSHIP_H


