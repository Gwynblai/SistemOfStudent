#include "pch.h"
#include "D:\pois\Project9\Project9\Shedule.h"
#include "D:\pois\Project9\Project9\Shedule.cpp"


TEST(SheduleTest, DisplaySchedule) {
    
    Shedule schedule(101, { "Math", "Physics" });

    // ������ ������
    testing::internal::CaptureStdout();
    schedule.displaySchedule();
    string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    string expected = "Schedule ID: 101\nSubjects: Math, Physics, \n";

    // �������� ������������
    EXPECT_EQ(output, expected);
}