#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <vector>
#include <string>
#include "D:\pois\Project9\Project9\Person.h"

using namespace std;
class Admin : public virtual Person {
public:
    using Person::Person; // Наследуем конструкторы из Person

    void createNewAccount(string name, string email, string role);


    void deleteAccount(int accountId);


    void generateReport();


    void manageDepartment(int departmentId, string action);

};

#endif // !ADMIN_H


