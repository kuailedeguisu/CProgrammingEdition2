#include <stdio.h>
#include "../CH04/getLine.h"
#define MAXLINE 1000

int getLine(char s[], int len);
void copy(char dest[], char src[]);

main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;

    while ((len = getLine(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("%s\n", longest);
    }
    

    return 0;
}

void copy(char dest[], char src[])
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
    {
        ++i;
    }
}