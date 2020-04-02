#include "tnode.h"
#include "key.h"
#include <stdio.h>
#include <ctype.h>

#define MAXWORD 5000

int main()
{
    struct tnode *root;
    char word[MAXWORD];
    root = NULL;

    while (getword(word, MAXWORD) != EOF)
    {
        if (isalpha(word[0]))
        {
            root = addtree(root, word);
        }
    }
    printtree(root);
    return 0;
}