#include <gtest/gtest.h>
#include "MainWindow.h"

TEST(MainWindowTest, Creation)
{
    MainWindow w;
    SUCCEED();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
