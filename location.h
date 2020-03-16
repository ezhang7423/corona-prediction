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
/* list of all other places
  linked to this one. each holds the other location, and how many
  people are flowing from that city to this one. that number can be negative.
  because this is a set, the cities which flow the most to this one are automatically
  at the top of the list 
  */

class Location
{
public:
    Location(std::string name, double x, double y, int total, int infected)
    {
        this->name = name;
        people["infected"] = infected;
        people["total"] = total;
        people["healthy"] = total - infected;
        people["recovered"] = 0;
        people["dead"] = 0;
        coords.first = x;
        coords.second = y;
    };

    std::string getName()
    {
        return name;
    }
    std::pair<double, double> getCoords()
    {
        return coords;
    }

private:
    std::string name;
    std::unordered_map<std::string, int> people;
    std::pair<double, double> coords;
    link links; // link
};
