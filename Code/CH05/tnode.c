#include "tnode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Treeptr addtree(Treeptr tree, char *word)
{
    int cond;
    if (tree == NULL)
    {
        tree = talloc();
        tree->count = 1;
        tree->word = strdup(word);
        tree->left = NULL;
        tree->right = NULL;
    }
    else if ((cond = strcmp(tree->word, word)) == 0)
    {
        tree->count++;
    }
    else if (cond > 0)
    {
        tree->right = addtree(tree->right, word);
    }
    else
    {
        tree->left = addtree(tree->left, word);
    }
    return tree;
}

void printtree(Treeptr tree)
{
    if (tree != NULL)
    {
        printtree(tree->left);
        printf("%4d %s\n", tree->count, tree->word);
        printtree(tree->right);
    }

}

Treeptr talloc(void)
{
    return (Treeptr)malloc(sizeof(Treenode));

}

char *strtup(char *s)
{
    char *p;
    p = (char *)malloc(strlen(s) + 1);
    if (p != NULL)
    {
        strcpy(p, s);
    }
    return p;
}