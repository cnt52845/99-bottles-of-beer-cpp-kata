#include <vector>
#include <string>

class Bottles {
public:
    static std::vector<std::string> song()
    {
        std::vector<std::string> song;
        add_verse(song);
        return song;
    }

private:
    static void add_verse(std::vector<std::string>& song)
    {
        song.push_back("99 bottles of beer on the wall, 99 bottles of beer.");
        song.push_back("Take one down and pass it around, 98 bottles of beer on the wall.");
    }
};
