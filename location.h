#include <set>
#include <utility>
// #include <iterator>

class locComp
{
};
class Location
{
private:
    int startingAmt;
    int velocityIn;
    int velocityOut;
    std::set<std::pair<Location, int>, locComp> links; // link
};
typedef std::set<std::pair<Location, int>, locComp> link;