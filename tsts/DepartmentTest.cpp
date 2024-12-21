#include "pch.h"
#include "D:\pois\Project9\Project9\Department.h"
#include "D:\pois\Project9\Project9\Department.cpp"

TEST(DepartmentTest, AddTeacher) {
    Department department("Physics");

    std::string expected = "Adding teacher ID 101 to department: Physics\n";

    // Захват вывода
    testing::internal::CaptureStdout();
    department.addTeacher(101);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// Тест для listSubjects
TEST(DepartmentTest, ListSubjects) {
    Department department("Chemistry");

    std::string expected = "Listing subjects in department: Chemistry\n";

    // Захват вывода
    testing::internal::CaptureStdout();
    department.listSubjects();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// Тест для getDepartmentInfo
TEST(DepartmentTest, GetDepartmentInfo) {
    Department department("Mathematics");

    std::string expected = "Department Name: Mathematics\n";

    // Захват вывода
    testing::internal::CaptureStdout();
    department.getDepartmentInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}