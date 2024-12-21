#include "D:\pois\Project9\Project9\Performance.h"


    // Конструктор с ассоциацией
    Performance::Performance(Student* student, double averageGrade, int missedHours) 
        : student(student), averageGrade(averageGrade), missedHours(missedHours) {}

    // Методы для изменения данных


    // Вывод информации об успеваемости
    void Performance::displayPerformance() const {
        cout << "Performance for Student: " << student->getName() << endl;
        cout << "Average Grade: " << averageGrade << endl;
        cout << "Missed Hours: " << missedHours << endl;
    }
