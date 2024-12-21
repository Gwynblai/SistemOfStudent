#include "pch.h"
#include "D:\pois\Project9\Project9\Department.h"
#include "D:\pois\Project9\Project9\Department.cpp"

TEST(DepartmentTest, AddTeacher) {
    Department department("Physics");

    std::string expected = "Adding teacher ID 101 to department: Physics\n";

    // ������ ������
    testing::internal::CaptureStdout();
    department.addTeacher(101);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// ���� ��� listSubjects
TEST(DepartmentTest, ListSubjects) {
    Department department("Chemistry");

    std::string expected = "Listing subjects in department: Chemistry\n";

    // ������ ������
    testing::internal::CaptureStdout();
    department.listSubjects();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// ���� ��� getDepartmentInfo
TEST(DepartmentTest, GetDepartmentInfo) {
    Department department("Mathematics");

    std::string expected = "Department Name: Mathematics\n";

    // ������ ������
    testing::internal::CaptureStdout();
    department.getDepartmentInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}