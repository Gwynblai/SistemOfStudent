#include "D:\pois\Project9\Project9\Teacher.h"


    Teacher::Teacher(int id, string name, string lastname, string email, vector<int> courses) : Person(id, name, email,lastname),courses(courses) {}

    void Teacher::assignTask(int courseId, string taskDescription) {
        cout << "Task assigned for course " << courseId << ": " << taskDescription << endl;
    }

    void Teacher::displayProfile() const {
        cout << "Name: " << name << ", Lastname: " << lastname
            << "ID: " << id << endl;

        // ������� ������ ������
        cout << "Courses: ";
        for (int courseId : courses) {
            cout << courseId << " "; // ������� ID ������� �����
        }
        cout << endl; // ������� �� ����� ������
    }