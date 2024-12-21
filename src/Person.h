#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "D:\pois\Project9\Project9\Entity.h"
class Person : public Entity {
protected:
    string name;
    string lastname;
    string email;
public:
    Person(int id, string name, string email, string lastname);
    string getName()const;
    string getEmail()const;
    string getLastname() const;
    virtual void displayProfile() const;

    void updateEmail(string newEmail);

};


#endif // !1