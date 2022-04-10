#include <gtest/gtest.h>
#include "fileStream.h"

TEST(fileStream, wordsEqual)
{
    FileStream _fileStream;
    GTEST_ASSERT_EQ(_fileStream.wordsEqual("file","file"),1);
    GTEST_ASSERT_EQ(_fileStream.wordsEqual("file","FiLe:"),0);

}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}