#include <stdio.h>
#include <unistd.h>
#include "mygetchar.h"
#define BUFSIZE 100

int mygetchar1(void)
{
    char c;
    return (read(0, &c, 1) == 1) ? (unsigned char)c : EOF;
}

int mygetchar2(void)
{
    static char buf[BUFSIZE];
    static char *bufp;
    static int n = 0;

    if (n == 0)
    {
        n = read(0, buf, sizeof(buf));
        bufp = buf;
    }

    return (--n >= 0) ? (unsigned char)*bufp++ : EOF;

}