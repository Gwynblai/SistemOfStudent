#include "D:\pois\Project9\Project9\Registration.h"


    // �����������, ����������� ID � ������
    Registration::Registration(int id, string password) : Entity(id), password(password) {} 

    // ����� ��� ��������� ������
    void Registration::changePassword(const string& newPassword) { 
        password = newPassword;
        cout << "Password changed successfully!" << endl;
    }

    // ����� ��� �������� ������
    bool Registration::validatePassword(const string& inputPassword) const {
        return password == inputPassword;
    }

    // ����� ��� ����������� ���������� � �����������
    void Registration::displayInfo() const {
        cout << "Registration ID: " << id << endl;
    }
