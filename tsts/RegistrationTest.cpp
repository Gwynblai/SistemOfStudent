#include "pch.h"
#include "D:\pois\Project9\Project9\Registration.h"
#include "D:\pois\Project9\Project9\Registration.cpp"

TEST(RegistrationTest, ChangePassword) {
    Registration registration(1, "old_password");

    // Захват вывода до изменения пароля
    testing::internal::CaptureStdout();
    registration.changePassword("new_password");
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected = "Password changed successfully!\n";
    EXPECT_EQ(output, expected);
}

// Тест для метода validatePassword
TEST(RegistrationTest, ValidatePassword) {
    Registration registration(2, "correct_password");

    // Проверка на правильный пароль
    EXPECT_TRUE(registration.validatePassword("correct_password"));

    // Проверка на неправильный пароль
    EXPECT_FALSE(registration.validatePassword("wrong_password"));
}

// Тест для метода displayInfo
TEST(RegistrationTest, DisplayInfo) {
    Registration registration(3, "some_password");

    // Захват вывода
    testing::internal::CaptureStdout();
    registration.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый результат
    std::string expected = "Registration ID: 3\n";
    EXPECT_EQ(output, expected);
}