#include "pch.h"
#include "D:\pois\Project9\Project9\Exam.h"
#include "D:\pois\Project9\Project9\Exam.cpp"
#include "D:\pois\Project9\Project9\Teacher.cpp"
#include "D:\pois\Project9\Project9\Student.cpp"

TEST(ExamTest, AddStudent) {
    Teacher teacher1(1, "Alice", "Smith", "charlie@example.com", { 1,2,3 });
    Exam exam(101, "Mathematics", &teacher1);

    Student student1(2, "Bob", "Brown", "bob@example.com", 3, 32145); 
    Student student2(3, "Charlie", "Davis", "charlie@example.com", 1, 31556); 

    exam.addStudent(&student1);
    exam.addStudent(&student2);

    // Захват вывода
    testing::internal::CaptureStdout();
    exam.displayExamInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Exam ID: 101, Subject: Mathematics\n"
        "Conducted by: Alice Smith\n"
        "Enrolled Students:\n"
        " - Bob bob@example.com\n"
        " - Charlie charlie@example.com\n";

    EXPECT_EQ(output, expected);
}


// Тест для displayExamInfo с отсутствующим преподавателем
TEST(ExamTest, DisplayExamInfoNoTeacher) {
    Exam exam(102, "Physics", nullptr);

    Student student(2, "Bob", "Brown", "bob@example.com", 3, 32145);
    
    exam.addStudent(&student);

    // Захват вывода
    testing::internal::CaptureStdout();
    exam.displayExamInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Exam ID: 102, Subject: Physics\n"
        "Enrolled Students:\n"
        " - Bob bob@example.com\n";

    EXPECT_EQ(output, expected);
}

// Тест для экзамена без студентов
TEST(ExamTest, DisplayExamInfoNoStudents) {
    Teacher teacher1(1, "Alice", "Smith", "charlie@example.com", { 1,2,3 });
    Exam exam(103, "Chemistry", &teacher1);

    // Захват вывода
    testing::internal::CaptureStdout();
    exam.displayExamInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Exam ID: 103, Subject: Chemistry\n"
        "Conducted by: Alice Smith\n"
        "Enrolled Students:\n";

    EXPECT_EQ(output, expected);
}