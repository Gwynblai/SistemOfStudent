#include "D:\pois\Project9\Project9\Department.h"

#include <iostream>
#include <string>

using namespace std;


    // Конструктор, инициализирующий только имя
    Department::Department(string Name) : Name(Name) {}

    // Метод для добавления преподавателя 
    void Department::addTeacher(int teacherId) { 
        cout << "Adding teacher ID " << teacherId << " to department: " << Name << endl;
    }

    // Метод для отображения списка предметов
    void Department::listSubjects() const {
        cout << "Listing subjects in department: " << Name << endl;
    }

    // Метод для получения информации о департаменте
    void Department::getDepartmentInfo() const {
        cout << "Department Name: " << Name << endl;
    }

    // Метод для назначения руководителя департамента


