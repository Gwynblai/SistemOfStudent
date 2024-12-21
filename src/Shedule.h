#pragma once
#ifndef SHEDULE_H
#define SHEDULE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "D:\pois\Project9\Project9\Entity.h"
#include "D:\pois\Project9\Project9\Subject.h"
class Shedule : public Entity, public Subject {
public:
    // ����������� ��� ������������� ID � ������ ���������
    Shedule(int id, const vector<string>& subjects);

    // ����� ��� ����������� ���������� � ����������
    void displaySchedule() const;

};
#endif // !SHEDULE_H


