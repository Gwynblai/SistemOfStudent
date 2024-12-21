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
    // ����� ��� ���������� ��������
    void addSubject(const string& subject);


    // ����� ��� ����������� ������ ���������
    void listSubjects() const;

};
#endif // !SUBJECT_H


