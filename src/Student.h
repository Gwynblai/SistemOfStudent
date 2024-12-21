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
    int course; // Курс
    int groupNumber; // Номер группы
public:
    // Конструктор с параметрами для всех полей
    Student(int id, string name, string email, string lastname, int course, int groupNumber);


    // Геттеры для новых полей


    // Переопределение метода displayProfile для отображения информации о студенте
    void displayProfile() const override;
 



};
#endif // !STUDENT_H


