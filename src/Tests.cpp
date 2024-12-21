#include "D:\pois\Project9\Project9\Tests.h"

Tests::Tests(int id, const string& subj, int max) 
    : testId(id), subject(subj), maxScore(max) {}

void Tests::displayTestInfo() const {
    std::cout << "Test ID: " << testId << ", Subject: " << subject
        << ", Max Score: " << maxScore << std::endl;
}