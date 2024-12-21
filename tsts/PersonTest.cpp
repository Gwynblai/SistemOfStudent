#include "pch.h"
#include "D:\pois\Project9\Project9\Person.h"

TEST(PersonTest, DisplayProfile) {
    Person person(1, "John", "john@example.com", "Doe");

    // Захват вывода
    testing::internal::CaptureStdout();
    person.displayProfile();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected = "Name: John,Lastname: Doe, Email: john@example.com,ID: 1\n";
    EXPECT_EQ(output, expected);
}

// Тест для метода updateEmail
TEST(PersonTest, UpdateEmail) {
    Person person(2, "Alice", "alice@example.com", "Smith");

    // Захват вывода до обновления email
    testing::internal::CaptureStdout();
    person.updateEmail("alice_new@example.com");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected = "Email updated to: alice_new@example.com\n";
    EXPECT_EQ(output, expected);
}