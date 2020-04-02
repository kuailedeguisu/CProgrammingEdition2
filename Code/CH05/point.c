#include "point.h"

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

struct point addpoint(struct point first, struct point second)
{
    struct point temp;
    temp.x = first.x + second.x;
    temp.y = first.y + second.y;
    return temp;

}