#include "../CH04/getLine.h"
#include <stdio.h>

#define MAXLINE 100
#define MONTHLEN 20

int main()
{
    char line[MAXLINE];
    int year, day;
    char monthname[MONTHLEN];

    while (getLine(line, MAXLINE) > 0)
    {
        if (sscanf(line, "%s %d %d", monthname, &day, &year) == 3)
        {
            printf("valid: %s\n", line);
        }
        else if (sscanf(line, "%d %s %d", &day, monthname, &year) == 3)
        {
            printf("valid : %s\n", line);
        }
        else
        {
            printf("invalid: %s\n", line);
        }
    }
    return 0;
}
