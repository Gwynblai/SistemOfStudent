#pragma once
#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H
#include <iostream>
#include <vector>
#include <string>
#include "D:\pois\Project9\Project9\Entity.h"
#include "D:\pois\Project9\Project9\Student.h"
using namespace std;
class LibraryCard : protected Entity {
    Student* student; // Ассоциация с Student
public:
    LibraryCard(int id, Student* student);

    void issueCard();


    void deactivateCard();

};
#endif // !LIBRARYCARD_H


