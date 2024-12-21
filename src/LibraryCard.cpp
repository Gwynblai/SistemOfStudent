#include "D:\pois\Project9\Project9\LibraryCard.h"


    LibraryCard::LibraryCard(int id, Student* student) : Entity(id), student(student) {}   

    void LibraryCard::issueCard() { 
        cout << "Library card ID " << id << " issued to student: " << student->getName() << endl; 
    }

    void LibraryCard::deactivateCard() {
        cout << "Library card ID " << id << " deactivated." << endl;
    }
