#include "D:\pois\Project9\Project9\Performance.h"


    // ����������� � �����������
    Performance::Performance(Student* student, double averageGrade, int missedHours) 
        : student(student), averageGrade(averageGrade), missedHours(missedHours) {}

    // ������ ��� ��������� ������


    // ����� ���������� �� ������������
    void Performance::displayPerformance() const {
        cout << "Performance for Student: " << student->getName() << endl;
        cout << "Average Grade: " << averageGrade << endl;
        cout << "Missed Hours: " << missedHours << endl;
    }
