#include <stddef.h>

struct key
{
    char *word;
    int count;
};

int getword(char *, int);
int binarysearch(char *, struct key *, int);
struct key *
binarysearchpr(char *, struct key *, int);