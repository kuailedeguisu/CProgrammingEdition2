#include "point.h"
struct rect
{
    struct point leftbottom;
    struct point righttop;
};

long area(struct rect r);

int ptinrect(struct point, struct rect);
struct rect canonrect(struct rect r);