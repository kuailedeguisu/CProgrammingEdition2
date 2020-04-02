// #include "systemcalls.h"
#include <unistd.h>

#define BUFSIZE 100
int main()
{
    int n;
    char buf[BUFSIZE];
    while ((n = read(0, buf, BUFSIZE)) > 0)
    {
        write(1, buf, n);
    }
    return 0;
}