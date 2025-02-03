#include <vector>
#include <string>

class Bottles {
public:
    static std::vector<std::string> song()
    {
        std::vector<std::string> song;
        for (int bottle_count = max_bottles; bottle_count >= 0; bottle_count--) {
            add_verse(song, bottle_count);
        }
        return song;
    }

private:
    static void add_verse(std::vector<std::string>& song, int bottle_count)
    {
        switch (bottle_count) {
        case 0:
            song.push_back("No more bottles of beer on the wall, no more bottles of beer.");
            song.push_back("Go to the store and buy some more, " + std::to_string(max_bottles) +
                           " bottles of beer on the wall.");
            break;
        case 1:
            song.push_back("1 bottle of beer on the wall, 1 bottle of beer.");
            song.push_back(
                "Take one down and pass it around, no more bottles of beer on the wall.");
            break;
        default:
            song.push_back(std::to_string(bottle_count) + " bottles of beer on the wall, " +
                           std::to_string(bottle_count) + " bottles of beer.");
            song.push_back("Take one down and pass it around, " + std::to_string(bottle_count - 1) +
                           " bottles of beer on the wall.");
        }
    }

    static const int max_bottles = 99;
};
