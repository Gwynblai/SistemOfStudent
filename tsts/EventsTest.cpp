#include "pch.h"
#include "D:\pois\Project9\Project9\Events.h"
#include "D:\pois\Project9\Project9\Events.cpp"
TEST(EventsTest, AddParticipant) {
    Events event(1, "Hackathon", "2023-12-01", "Main Hall");

    // ��������� ���������
    event.addParticipant("Alice");

    // ������ ������
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ���������
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

// ���� ��� markAsCompleted
TEST(EventsTest, MarkAsCompleted) {
    Events event(2, "Workshop", "2023-11-30", "Room 101");

    // �������� ����������� �����������
    event.markAsCompleted();

    // ������ ������
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ���������
    std::string expected =
        "Event ID: 2\n"
        "Name: Workshop\n"
        "Date: 2023-11-30\n"
        "Location: Room 101\n"
        "Status: Completed\n"
        "Participants:\n";

    EXPECT_EQ(output, expected);
}

// ���� ��� displayEventDetails
TEST(EventsTest, DisplayEventDetails) {
    Events event(3, "Seminar", "2023-12-10", "Auditorium");

    // ��������� ���������� ����������
    event.addParticipant("Bob");
    event.addParticipant("Charlie");

    // ������ ������
    testing::internal::CaptureStdout();
    event.displayEventDetails();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ���������
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