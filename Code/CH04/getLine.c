#include "getLine.h"
#include <stdio.h>

int getLine(char s[], int len)
{
    int i, c;
    for (i = 0; (i < len - 1) &&  ((c = getchar()) != EOF) && (c != '\n'); ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}