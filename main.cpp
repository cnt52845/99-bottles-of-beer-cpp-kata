#include <iostream>
#include "bottles.h"

int
main()
{
    auto song = Bottles::song();
    std::cout << "song.size() = " << song.size() << std::endl;
    int line_count = 0;
    for (const auto& line : song) {
        std::cout << line_count++ << ": " << line << std::endl;
    }
    return 0;
}
