#include "D:\pois\Project9\Project9\Shedule.h"

Shedule::Shedule(int id, const vector<string>& subjects)
    : Entity(id), Subject(subjects) {}


    // Метод для отображения информации о расписании
    void Shedule::displaySchedule() const { 
        cout << "Schedule ID: " << id << endl; 
        listSubjects(); 
    }
