#pragma once
#ifndef EVENTS_H
#define EVENTS_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Events {
protected:
    int eventId;
    string name;
    string date;
    string location;
    vector<string> participants;
    bool isCompleted;

public:
    // Конструкторы
    Events(int id, const std::string& name, const std::string& date, const std::string& location);

    // Методы
    void addParticipant(const std::string& participant);
    void markAsCompleted();
    void displayEventDetails() const;

};
#endif // !EVENTS_H


