#include "bottles.h"

#include <gmock/gmock.h>

class BottlesTest : public testing::Test {
public:
    static void SetUpTestSuite() { song = Bottles::song(); }

    static void TearDownTestSuite() { song.clear(); }

    void test_verse()
    {
        ASSERT_GE(song.size(), 2);
        ASSERT_EQ(song[0], "99 bottles of beer on the wall, 99 bottles of beer.");
        ASSERT_EQ(song[1], "Take one down and pass it around, 98 bottles of beer on the wall.");
    }

    static std::vector<std::string> song;
};

std::vector<std::string> BottlesTest::song;

TEST_F(BottlesTest, Song)
{
    test_verse();
}
