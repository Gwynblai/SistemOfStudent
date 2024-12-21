#include "pch.h"
#include "D:\pois\Project9\Project9\Admin.h"
#include "D:\pois\Project9\Project9\Admin.cpp"
#include "D:\pois\Project9\Project9\Person.cpp"

TEST(AdminTest, CreateNewAccount) {
    Admin admin(3,"John", "alice@example.com","Mand");

    std::string expected = "Creating new Student account: Alice (alice@example.com)\n";

    // ������ ������
    testing::internal::CaptureStdout();
    admin.createNewAccount("Alice", "alice@example.com", "Student");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// ���� ��� deleteAccount
TEST(AdminTest, DeleteAccount) {
    Admin admin(3, "John", "alice@example.com", "Mand"); 

    std::string expected = "Deleting account ID: 12345\n";

    // ������ ������
    testing::internal::CaptureStdout();
    admin.deleteAccount(12345);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// ���� ��� generateReport
TEST(AdminTest, GenerateReport) {
    Admin admin(3, "John", "alice@example.com", "Mand"); 

    std::string expected = "Generating system-wide report...\n";

    // ������ ������
    testing::internal::CaptureStdout();
    admin.generateReport();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}

// ���� ��� manageDepartment
TEST(AdminTest, ManageDepartment) {
    Admin admin(3, "John", "alice@example.com", "Mand"); 

    std::string expected = "Performing action 'Add New Course' on department ID: 42\n";

    // ������ ������
    testing::internal::CaptureStdout();
    admin.manageDepartment(42, "Add New Course");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}