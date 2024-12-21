#include "pch.h"
#include "D:\pois\Project9\Project9\Performance.h"
#include "D:\pois\Project9\Project9\Performance.cpp"

TEST(PerformanceTest, DisplayPerformance) {
    Student student1(2, "Bob", "Brown", "bob@example.com", 3, 32145);
    Performance performance(&student1, 4.5, 10);

    // Захват вывода
    testing::internal::CaptureStdout();
    performance.displayPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Performance for Student: Bob\n"
        "Average Grade: 4.5\n"
        "Missed Hours: 10\n";

    EXPECT_EQ(output, expected);
}

// Тест для displayPerformance с другими значениями
TEST(PerformanceTest, DisplayPerformanceDifferentValues) {
    Student student1(2, "Bob", "Brown", "bob@example.com", 3, 32145); 
    Performance performance(&student1, 3.0, 5);

    // Захват вывода
    testing::internal::CaptureStdout();
    performance.displayPerformance();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected =
        "Performance for Student: Bob\n"
        "Average Grade: 3\n"
        "Missed Hours: 5\n";

    EXPECT_EQ(output, expected);
}