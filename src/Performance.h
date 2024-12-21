#pragma once
#ifndef PERFORMANCE_H
#define PERFORMANCE_H
#include <iostream>
#include <string>
#include <vector>
#include "D:\pois\Project9\Project9\Student.h"
using namespace std;

class Performance {
    Student* student; // Ассоциация через указатель на объект StudentProfile
    double averageGrade;      // Средний балл
    int missedHours;         // Часы пропусков

public:

    Performance(Student* student, double averageGrade = 0.0, int missedHours = 0);

    


    // Вывод информации об успеваемости
    void displayPerformance() const;

};
#endif // !PERFORMANCE_H

