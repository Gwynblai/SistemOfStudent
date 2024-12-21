#include "D:\pois\Project9\Project9\Subject.h"



    Subject::Subject(vector<string> subjects): subjects(subjects){}
    void Subject::addSubject(const string& subject) {
        subjects.push_back(subject);
    }

    // Метод для отображения списка предметов
    void Subject::listSubjects() const {
        cout << "Subjects: ";
        for (const auto& subject : subjects) {
            cout << subject << ", ";
        }
        cout << endl;
    }
