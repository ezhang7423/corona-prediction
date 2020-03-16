#include "location.h"

class Rural : public Location
{
public:
    Rural(std::string name, double x, double y, int total, int infected) : Location(name, x, y, total, infected)
    {
        setParams();
    }

    virtual void setParams()
    {
        params.a = 0;
        params.c = 0;
        params.alpha = 0;
        params.gamma = 0;
    }
};