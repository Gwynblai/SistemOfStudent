#include "D:\pois\Project9\Project9\Events.h"

Events::Events(int id, const string& eventName, const string& eventDate, const string& eventLocation)
    : eventId(id), name(eventName), date(eventDate), location(eventLocation), isCompleted(false) {}

// Добавление участника
void Events::addParticipant(const std::string& participant) {
    participants.push_back(participant);
}


// Отметка мероприятия как завершенного
void Events::markAsCompleted() {
    isCompleted = true;
}

// Вывод информации о мероприятии
void Events::displayEventDetails() const {
    std::cout << "Event ID: " << eventId << "\n"
        << "Name: " << name << "\n"
        << "Date: " << date << "\n"
        << "Location: " << location << "\n"
        << "Status: " << (isCompleted ? "Completed" : "Ongoing") << "\n"
        << "Participants:\n";
    for (const auto& participant : participants) {
        std::cout << "- " << participant << "\n";
    }
}
