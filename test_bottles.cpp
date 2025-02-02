#include "bottles.h"

#include <gmock/gmock.h>

using ::testing::IsEmpty;

TEST(Bottles, Song)
{
    std::vector<std::string> song = Bottles::song();
    ASSERT_GE(song.size(), 2);
    ASSERT_EQ(song[0], "99 bottles of beer on the wall, 99 bottles of beer.");
    ASSERT_EQ(song[1], "Take one down and pass it around, 98 bottles of beer on the wall.");
}
