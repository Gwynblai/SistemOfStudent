#include "pch.h"
#include "D:\pois\Project9\Project9\Entity.h"
#include "D:\pois\Project9\Project9\Entity.cpp"

TEST(EntityTest, PrintInfo) {
    Entity entity(12345);

    std::string expected = "Entity ID: 12345\n";

    // Захват вывода в строковый поток
    testing::internal::CaptureStdout();
    entity.printInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, expected);
}
