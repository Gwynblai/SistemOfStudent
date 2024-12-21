#include "D:\pois\Project9\Project9\Exam.h"



    Exam::Exam(int id, string subject, Teacher* teacher)
        : Entity(id), subject(subject), teacher(teacher){}

    // Добавить студента к экзамену
    void Exam::addStudent(Student*student) {
        students.push_back(student);
    }

    // Вывести информацию об экзамене
    void Exam::displayExamInfo() const {
        cout << "Exam ID: " << id << ", Subject: " << subject << endl;
        if (teacher) {
            cout << "Conducted by: " << teacher->getName() << " " << teacher->getLastname() << endl;
        }
        cout << "Enrolled Students:" << endl;
        for (const auto& student : students) {
            cout << " - " << student->getName() << " " << student->getLastname() << endl;
        }
    }
