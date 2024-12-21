#include "pch.h"
#include "D:\pois\Project9\Project9\Subject.h"
#include "D:\pois\Project9\Project9\Subject.cpp"

TEST(SubjectTest, AddSubjectAndListSubjects) {
    // ����������� ������ ���������
    std::vector<std::string> subjects = { "Math", "Physics" };
    Subject subject(subjects);

    // ������ ������ �� ���������� ������ ��������
    testing::internal::CaptureStdout();
    subject.listSubjects();
    std::string outputBefore = testing::internal::GetCapturedStdout();

    // ��������� ����� �� ����������
    std::string expectedBefore = "Subjects: Math, Physics, \n";

    // ������� ����� �������
    subject.addSubject("Chemistry");

    // ������ ������ ����� ���������� ������ ��������
    testing::internal::CaptureStdout();
    subject.listSubjects();
    std::string outputAfter = testing::internal::GetCapturedStdout();

    // ��������� ����� ����� ����������
    std::string expectedAfter = "Subjects: Math, Physics, Chemistry, \n";

    // ���������, ��� ����� ����� � ����� ���������� �������� ���������
    EXPECT_EQ(outputBefore, expectedBefore);
    EXPECT_EQ(outputAfter, expectedAfter);
}