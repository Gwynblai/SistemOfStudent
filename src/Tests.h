#pragma once
#ifndef TESTS_H
#define TESTS_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Tests {
private:
    int testId;
    string subject;
    int maxScore;

public:
    Tests(int id, const string& subj, int max);

    void displayTestInfo() const;

};
#endif // !TESTS_H


