#include <stdio.h>

int main()
{
    #if 0
    int c;
    while ((c = mygetchar1()) != EOF)
    {
        putchar(c);
    }
    #endif

    int d;
    while ((d = mygetchar2()) != EOF)
    {
        putchar(d);
    }

    return 0;
}