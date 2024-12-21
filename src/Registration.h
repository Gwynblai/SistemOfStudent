#pragma once
#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "D:\pois\Project9\Project9\Entity.h"
class Registration : private Entity {
    string password;

public:
    // �����������, ����������� ID � ������
    Registration(int id, string password);

    // ����� ��� ��������� ������
    void changePassword(const string& newPassword);


    // ����� ��� �������� ������
    bool validatePassword(const string& inputPassword) const;


    // ����� ��� ����������� ���������� � �����������
    void displayInfo() const;

};
#endif // !REGISTRATION_H


