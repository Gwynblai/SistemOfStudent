#include "pch.h"
#include "D:\pois\Project9\Project9\Subject.h"
#include "D:\pois\Project9\Project9\Subject.cpp"

TEST(SubjectTest, AddSubjectAndListSubjects) {
    // Изначальный список предметов
    std::vector<std::string> subjects = { "Math", "Physics" };
    Subject subject(subjects);

    // Захват вывода до добавления нового предмета
    testing::internal::CaptureStdout();
    subject.listSubjects();
    std::string outputBefore = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод до добавления
    std::string expectedBefore = "Subjects: Math, Physics, \n";

    // Добавим новый предмет
    subject.addSubject("Chemistry");

    // Захват вывода после добавления нового предмета
    testing::internal::CaptureStdout();
    subject.listSubjects();
    std::string outputAfter = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод после добавления
    std::string expectedAfter = "Subjects: Math, Physics, Chemistry, \n";

    // Проверяем, что вывод перед и после добавления предмета корректен
    EXPECT_EQ(outputBefore, expectedBefore);
    EXPECT_EQ(outputAfter, expectedAfter);
}