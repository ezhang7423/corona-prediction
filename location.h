#include <set>
#include <utility>
#include <string>
#include <unordered_map>
// #include <iterator>

class Location;

struct locComp
{
    bool operator()(std::pair<Location, int> l, std::pair<Location, int> r){};
};

typedef std::set<std::pair<Location, int>, locComp> link;

class Location
{
public:
    Location(int total, int infected)
    {
        people["infected"] = infected;
        people["total"] = total;
        people["healthy"] = total - infected;
        people["recovered"] = 0;
        people["dead"] = 0;
    }

private:
    std::unordered_map<std::string, int> people;
    // int infected;
    // int healthy;
    // int recovered;
    // int dead;
    // int total;
    int velocityIn;
    int velocityOut;
    link links; // link
};
