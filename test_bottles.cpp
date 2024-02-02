#include "bottles.h"

#include <gmock/gmock.h>

using ::testing::IsEmpty;

TEST(Bottles, Song)
{
    EXPECT_THAT(Bottles::song(), IsEmpty());
}
