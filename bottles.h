#include <vector>
#include <string>

class Bottles {
public:
    static std::vector<std::string> song()
    {
        std::vector<std::string> song;
        int                      bottle_count = 99;
        add_verse(song, bottle_count);
        bottle_count--;
        add_verse(song, bottle_count);
        return song;
    }

private:
    static void add_verse(std::vector<std::string>& song, int bottle_count)
    {
        song.push_back(std::to_string(bottle_count) + " bottles of beer on the wall, " +
                       std::to_string(bottle_count) + " bottles of beer.");
        song.push_back("Take one down and pass it around, " + std::to_string(bottle_count - 1) +
                       " bottles of beer on the wall.");
    }
};
