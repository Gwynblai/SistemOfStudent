#pragma once
#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "D:\pois\Project9\Project9\Entity.h"
class Registration : private Entity {
    string password;

public:
    // Конструктор, принимающий ID и пароль
    Registration(int id, string password);

    // Метод для изменения пароля
    void changePassword(const string& newPassword);


    // Метод для проверки пароля
    bool validatePassword(const string& inputPassword) const;


    // Метод для отображения информации о регистрации
    void displayInfo() const;

};
#endif // !REGISTRATION_H


