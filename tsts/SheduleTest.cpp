#include "pch.h"
#include "D:\pois\Project9\Project9\Shedule.h"
#include "D:\pois\Project9\Project9\Shedule.cpp"


TEST(SheduleTest, DisplaySchedule) {
    
    Shedule schedule(101, { "Math", "Physics" });

    // Захват вывода
    testing::internal::CaptureStdout();
    schedule.displaySchedule();
    string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    string expected = "Schedule ID: 101\nSubjects: Math, Physics, \n";

    // Проверка корректности
    EXPECT_EQ(output, expected);
}