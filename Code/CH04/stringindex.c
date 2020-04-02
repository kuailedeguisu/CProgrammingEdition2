#include <stdio.h>
#define MAXLINE 1000

int getLine(char str[], int max);
int stringindex(char source[], char searchfor[]);
char pattern[] = "ould";

main()
{
    char line[MAXLINE];
    int found = 0;
    while (getLine(line, MAXLINE) > 0)
    {
        if (stringindex(line, pattern) >= 0)
        {
            printf("%s\n", line);
            found++;
        }
    }
    return found;
}

int getLine(char str[], int max)
{
    int c, i;
    i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n')
    {
        str[i++] = c;
    }
    if (c == '\n')
    {
        str[i++] = c;
    }
    str[i] = '\0';
    return i;
}

int stringindex(char source[], char searchfor[])
{
    int i, j, k;
    for (i = 0; source[i] != '\0'; ++i)
    {
        for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
        {
            ;
        }
        if (k > 0 && searchfor[k] == '\0')
        {
            return i;
        }
    }
    return -1;
}