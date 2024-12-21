#pragma once
#ifndef SCHOLARSHIP_H
#define SCHOLARSHIP_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Scholarship {
    int studentId;
    string scholarshipType; // Тип стипендии, например, "академическая", "социальная"
    float amount; // Сумма стипендии
    bool isEligible; // Условие на получение

public:
    // Конструктор
    Scholarship(int studentId, const string& scholarshipType, float amount);


    // Обновить право на стипендию


    // Показать информацию о стипендии
    void displayScholarshipInfo() const;

};
#endif // !SCHOLARSHIP_H


