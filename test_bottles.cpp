#include "bottles.h"

#include <gmock/gmock.h>

class BottlesTest : public testing::Test {
public:
    static void SetUpTestSuite() { song = Bottles::song(); }

    static void TearDownTestSuite() { song.clear(); }

    void test_verse(int verse)
    {
        const int         bottle_count      = max_verse - verse;
        const int         first_line_index  = verse * 2;
        const int         second_line_index = verse * 2 + 1;
        const int         min_song_size     = verse * 2 + 2;
        const std::string expected_1st_line = std::to_string(bottle_count) +
                                              " bottles of beer on the wall, " +
                                              std::to_string(bottle_count) + " bottles of beer.";
        const std::string expected_2nd_line = "Take one down and pass it around, " +
                                              std::to_string(bottle_count - 1) +
                                              " bottles of beer on the wall.";

        ASSERT_GE(song.size(), min_song_size);
        ASSERT_EQ(song[first_line_index], expected_1st_line);
        ASSERT_EQ(song[second_line_index], expected_2nd_line);
    }

    static const int                max_verse = 99;
    static std::vector<std::string> song;
};

std::vector<std::string> BottlesTest::song;

TEST_F(BottlesTest, Song)
{
    test_verse(0);
    test_verse(1);
}
