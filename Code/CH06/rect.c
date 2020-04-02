#include "rect.h"

#define min(a, b) (((a) < (b))) ? (a) : (b)
#define max(a, b) (((a) > (b))) ? (a) : (b)

long area(struct rect r)
{
    long temp;
    int length = r.righttop.x - r.leftbottom.x;
    int width = r.righttop.y - r.leftbottom.y;
    temp = length * width;
    return temp;
}

int ptinrect(struct point pt, struct rect r)
{
    return pt.x >= r.leftbottom.x &&
        pt.x <= r.righttop.x &&
        pt.y >= r.leftbottom.y &&
        pt.y <= r.righttop.y;

}

struct rect canonrect(struct rect r)
{
    struct rect temp;
    temp.leftbottom.x = min(r.leftbottom.x, r.righttop.x);
    temp.leftbottom.y = min(r.leftbottom.y, r.righttop.y);
    temp.righttop.x = max(r.leftbottom.x, r.righttop.x);
    temp.righttop.y = max(r.leftbottom.y, r.righttop.y);
    return temp;
}