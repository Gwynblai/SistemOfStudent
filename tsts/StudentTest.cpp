#include "pch.h"
#include "D:\pois\Project9\Project9\Student.h"

TEST(StudentTest, DisplayProfile) {
    Student student(123, "John", "john@example.com", "Doe", 3, 42);

    // Захват вывода
    testing::internal::CaptureStdout();
    student.displayProfile();
    string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    string expected = "Name: John,Lastname: Doe, Email: john@example.com,ID: 123,Course: 3,Group: 42\n";

    // Проверка корректности
    EXPECT_EQ(output, expected);
}