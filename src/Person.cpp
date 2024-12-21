#include "D:\pois\Project9\Project9\Person.h"

using namespace std;

Person::Person(int id, string name, string email, string lastname) : Entity(id), name(name), email(email), lastname(lastname) {}
    string Person::getName() const { return name; }
    string Person::getEmail() const { return email; }
    string Person::getLastname() const { return lastname; }
    void Person::displayProfile() const {
        cout << "Name: " << name << ",Lastname: " << lastname << ", Email: " << email<<",ID: "<<id << endl;
    }
    void Person::updateEmail(string newEmail) {
        email = newEmail;
        cout << "Email updated to: " << email << endl;
    }