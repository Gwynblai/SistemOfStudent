#include "pch.h"
#include "D:\pois\Project9\Project9\Tests.h"
#include "D:\pois\Project9\Project9\Tests.cpp"

TEST(TestsTest, DisplayTestInfo) {
    Tests test(101, "Mathematics", 100);

    // ������ ������
    testing::internal::CaptureStdout(); 
    test.displayTestInfo();  
    string output = testing::internal::GetCapturedStdout(); 

    // ��������� �����
    string expected = "Test ID: 101, Subject: Mathematics, Max Score: 100\n"; 

    // �������� ������������
    EXPECT_EQ(output, expected); 
}