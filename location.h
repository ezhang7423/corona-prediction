#include <set>
#include <utility>
// #include <iterator>

bool locComp(std::pair<Location, int> l, std::pair<Location, int> r)
{
    return (r.second > l.second);
}

class Location
{
private:
    int startingAmt;
    int velocityIn;
    int velocityOut;
    std::set<std::pair<Location, int>, locComp> links; // link
};

typedef std::set<std::pair<Location, int>, locComp> link;