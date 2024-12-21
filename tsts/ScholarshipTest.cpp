#include "pch.h"
#include "D:\pois\Project9\Project9\Scholarship.h"
#include "D:\pois\Project9\Project9\Scholarship.cpp"

TEST(ScholarshipTest, DisplayScholarshipInfo) {
    Scholarship scholarship(1, "Merit-based", 5000.0f);

    // Захват вывода
    testing::internal::CaptureStdout(); 
    scholarship.displayScholarshipInfo(); 
    std::string output = testing::internal::GetCapturedStdout(); 

    // Ожидаемый результат
    std::string expected =
        "Scholarship Information:\n"
        "Student ID: 1\n"
        "Scholarship Type: Merit-based\n"
        "Amount: $5000\n"
        "Eligibility: Not Eligible\n";

    EXPECT_EQ(output, expected);
}

// Тест для метода updateEligibility
