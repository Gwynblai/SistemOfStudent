#include "pch.h"
#include "D:\pois\Project9\Project9\Teacher.h"


TEST(TeacherTest, AssignTask) {
    Teacher teacher(1, "John", "Doe", "john.doe@example.com", { 101, 102, 103 });

    // Захват вывода
    testing::internal::CaptureStdout();
    teacher.assignTask(101, "Prepare lecture notes for Week 1");
    string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    string expected = "Task assigned for course 101: Prepare lecture notes for Week 1\n";

    // Проверяем, что вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected);
}

// Тест для displayProfile
TEST(TeacherTest, DisplayProfile) {
    Teacher teacher(1, "John", "Doe", "john.doe@example.com", { 101, 102, 103 });

    // Захват вывода
    testing::internal::CaptureStdout();
    teacher.displayProfile();
    string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    string expected =
        "Name: John, Lastname: DoeID: 1\n"
        "Courses: 101 102 103 \n";

    // Проверяем, что вывод совпадает с ожидаемым
    EXPECT_EQ(output, expected);
}