#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Subject {
protected:
    vector<string> subjects;

public:
    Subject(vector<string> subjects);
    // Метод для добавления предмета
    void addSubject(const string& subject);


    // Метод для отображения списка предметов
    void listSubjects() const;

};
#endif // !SUBJECT_H


