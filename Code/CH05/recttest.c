#include "rect.h"
#include <stdio.h>

#define XMAX 800
#define YMAX 600

int main()
{
    struct rect screen;
    struct point leftbottom = makepoint(0, 0);
    struct point righttop = makepoint(XMAX, YMAX);
    screen.leftbottom = leftbottom;
    screen.righttop = righttop;
    printf("area=%ld\n", area(screen));
    struct point sum = addpoint(leftbottom, righttop);
    printf("addpoint=(%d, %d)\n", sum.x, sum.y);
    struct point pt = {200, 300};
    printf("ptinrect=%d\n", ptinrect(pt, screen));
    struct point *pp = &pt;
    printf("The point pp is pointed to is (%d, %d)\n", pp->x, pp->y);
    struct rect m = {500, 300};
    struct rect r = canonrect(m);
    printf("r leftbottom=(%d, %d)\n", r.leftbottom.x, r.leftbottom.y);
    printf("r righttop=(%d, %d)\n", r.righttop.x, r.righttop.y);

    return 0;
}