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
    // Конструктор, инициализирующий только имя
    Department(string Name);

    // Метод для добавления преподавателя
    void addTeacher(int teacherId);


    // Метод для отображения списка предметов
    void listSubjects() const;


    // Метод для получения информации о департаменте
    void getDepartmentInfo() const;


    // Метод для назначения руководителя департамента

};
#endif // !DEPARTMENT_H


