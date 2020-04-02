#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define CALLOCLEN 100

int main()
{
    system("date");
    int *p = (int *)calloc(CALLOCLEN, sizeof(int));
    free(p);
    return 0;
}