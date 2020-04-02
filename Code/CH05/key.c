#include "key.h"
#include "../CH04/calc.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int getword(char *word, int lim)
{
    int c;
    char *w = word;
    while (isspace(c = getch()))
        ;
    if (c != EOF)
    {
        *w++ = c;
    }
    if (!isalpha(c))
    {
        *w = '\0';
        return c;
    }
    for (; --lim > 0; w++)
    {
        if (!isalnum(*w = getch()))
        {
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}
int binarysearch(char * word, struct key *keytab, int lim)
{
    int middle, n, low = 0, high = lim - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if ((n = strcmp(word, keytab[middle].word)) < 0)
        {
            high = middle - 1;;
        }
        else if ( n > 0)
        {
            low = middle + 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

struct key *
binarysearchpr(char *word, struct key * keytab, int lim)
{
    int n;
    struct key *low = &keytab[0];
    struct key *high = &keytab[lim - 1];
    struct key *middle;
    while (low <= high)
    {
        middle = low + (high - low) / 2;
        if ((n = strcmp(word, middle->word)) < 0)
        {
            high = middle - 1;;
        }
        else if ( n > 0)
        {
            low = middle + 1;
        }
        else
        {
            return middle;
        }
    }
    return NULL;

}