#include "key.h"
#include <ctype.h>
#include <stdio.h>

#define MAXWORD 100
struct key keytab[] =
{
    {"auto", 0},
    {"break", 0},
    {"case", 0},
    {"char", 0},
    {"const", 0},
    {"continue", 0},
    {"default", 0},
    {"unsigned", 0},
    {"void", 0},
    {"votatile", 0},
    {"while", 0}
};

#define NKEYS sizeof(keytab) / sizeof(struct key)

int main()
{
    char word[MAXWORD];
    struct key *p;
    while (getword(word, MAXWORD) != EOF)
    {
        if (isalpha(word[0]))
        {
            if ((p = binarysearchpr(word, keytab, NKEYS)) != NULL)
            {
                p->count++;
            }
        }
    }

    for (p = keytab; p < keytab + NKEYS; ++p)
    {
        if (p->count > 0)
        {
            printf("%4d %s\n", p->count, p->word);
        }
    }
    return 0;
}