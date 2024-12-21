#include "D:\pois\Project9\Project9\Scholarship.h"

    // �����������
    Scholarship::Scholarship(int studentId, const string& scholarshipType, float amount)
        : studentId(studentId), scholarshipType(scholarshipType), amount(amount), isEligible(false) {}

    // �������� ����� �� ���������


    // �������� ���������� � ���������
    void Scholarship::displayScholarshipInfo() const {
        cout << "Scholarship Information:" << endl; 
        cout << "Student ID: " << studentId << endl; 
        cout << "Scholarship Type: " << scholarshipType << endl;
        cout << "Amount: $" << amount << endl;
        cout << "Eligibility: " << (isEligible ? "Eligible" : "Not Eligible") << endl;
    }
