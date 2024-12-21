#include "Exam.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include "Department.h"
#include "Entity.h"
#include "Events.h"
#include "LibraryCard.h"
#include "Performance.h"
#include "Person.h"
#include "Registration.h"
#include "Scholarship.h"
#include "Shedule.h"
#include "Subject.h"
#include "Tests.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    Teacher teacher1(1, "Alice", "Smith", "charlie@example.com", { 1,2,3 });
    teacher1.displayProfile();
    teacher1.assignTask(101, "Complete Chapter 5 exercises");

    // Создаем студентов
    Student student1(2, "Bob", "Brown", "bob@example.com", 3, 32145);
    Student student2(3, "Charlie", "Davis", "charlie@example.com", 1, 31556);

    // Создаем экзамен и ассоциируем с учителем
    Exam exam1(101, "Mathematics", &teacher1);
    exam1.addStudent(&student1);  
    exam1.addStudent(&student2);   

    // Выводим информацию об экзамене
    exam1.displayExamInfo();

    LibraryCard libraryCard1(1001, &student1);
    libraryCard1.issueCard();
    libraryCard1.deactivateCard();


    Events event1(2001, "Math Olympiad", "2024-12-15", "Main Hall");
    event1.addParticipant("Alice Smith");
    event1.addParticipant("Bob Johnson");
    event1.displayEventDetails();
    event1.markAsCompleted();
    event1.displayEventDetails();

    Tests test1(3001, "Mathematics", 100);
    test1.displayTestInfo();

    Scholarship scholarship1(1, "Merit-Based", 1500.0f);
    scholarship1.displayScholarshipInfo();

    Performance performance1(&student2, 4.5f, 3);
    performance1.displayPerformance();


    Registration registration1(5001, "securePass123");
    registration1.displayInfo();
    if (registration1.validatePassword("securePass123")) {
        cout << "Password validated successfully!" << endl;
    }
    else {
        cout << "Invalid password!" << endl;
    }
    registration1.changePassword("newPass456");


 
    Subject schedule({ "Math", "Physics", "Chemistry" });
    schedule.listSubjects();


    Department department1("Science"); 
    department1.addTeacher(2); 
    department1.getDepartmentInfo(); 
    department1.listSubjects(); 
 



    // Создание теста


    return 0;
};
	// Добавляем студентов к экзамену
