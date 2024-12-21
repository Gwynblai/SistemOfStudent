#include "pch.h"
#include "D:\pois\Project9\Project9\Events.h"
#include "D:\pois\Project9\Project9\Events.cpp"
TEST(EventsTest, AddParticipant) {
    Events event(1, "Hackathon", "2023-12-01", "Main Hall");

    // Добавляем участника
    event.addParticipant("Alice");

    // Захват вывода
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Event ID: 1\n"
        "Name: Hackathon\n"
        "Date: 2023-12-01\n"
        "Location: Main Hall\n"
        "Status: Ongoing\n"
        "Participants:\n"
        "- Alice\n";

    EXPECT_EQ(output, expected);
}

// Тест для markAsCompleted
TEST(EventsTest, MarkAsCompleted) {
    Events event(2, "Workshop", "2023-11-30", "Room 101");

    // Отмечаем мероприятие завершенным
    event.markAsCompleted();

    // Захват вывода
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Event ID: 2\n"
        "Name: Workshop\n"
        "Date: 2023-11-30\n"
        "Location: Room 101\n"
        "Status: Completed\n"
        "Participants:\n";

    EXPECT_EQ(output, expected);
}

// Тест для displayEventDetails
TEST(EventsTest, DisplayEventDetails) {
    Events event(3, "Seminar", "2023-12-10", "Auditorium");

    // Добавляем нескольких участников
    event.addParticipant("Bob");
    event.addParticipant("Charlie");

    // Захват вывода
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Event ID: 3\n"
        "Name: Seminar\n"
        "Date: 2023-12-10\n"
        "Location: Auditorium\n"
        "Status: Ongoing\n"
        "Participants:\n"
        "- Bob\n"
        "- Charlie\n";

    EXPECT_EQ(output, expected);
}