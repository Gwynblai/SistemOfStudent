#include "pch.h"
#include "D:\pois\Project9\Project9\Registration.h"
#include "D:\pois\Project9\Project9\Registration.cpp"

TEST(RegistrationTest, ChangePassword) {
    Registration registration(1, "old_password");

    // ������ ������ �� ��������� ������
    testing::internal::CaptureStdout();
    registration.changePassword("new_password");
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ���������
    std::string expected = "Password changed successfully!\n";
    EXPECT_EQ(output, expected);
}

// ���� ��� ������ validatePassword
TEST(RegistrationTest, ValidatePassword) {
    Registration registration(2, "correct_password");

    // �������� �� ���������� ������
    EXPECT_TRUE(registration.validatePassword("correct_password"));

    // �������� �� ������������ ������
    EXPECT_FALSE(registration.validatePassword("wrong_password"));
}

// ���� ��� ������ displayInfo
TEST(RegistrationTest, DisplayInfo) {
    Registration registration(3, "some_password");

    // ������ ������
    testing::internal::CaptureStdout();
    registration.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� ���������
    std::string expected = "Registration ID: 3\n";
    EXPECT_EQ(output, expected);
}