#include "nlist.h"
#include "tnode.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define HASHSIZE 101
struct nlist *hashtable[HASHSIZE];

unsigned hash(char *s)
{
    unsigned hashval;
    for (hashval = 0; *s != '\0'; s++)
    {
        hashval = *s + hashval * 31;
    }
    return hashval;
}

struct nlist *lookup(char *s)
{
    struct nlist *np;
    for (np = hashtable[hash(s)]; np != NULL; np = np->next)
    {
        if (strcmp(np->name, s) == 0)
        {
            return np;
        }
    }
    return NULL;
}

struct nlist *install(char *name, char *defn)
{
    struct nlist *np;
    unsigned hashval;
    if ((np = lookup(name)) == NULL)
    {
        np = (struct nlist *)malloc(sizeof(struct nlist));
        if (np == NULL || (np->name = strdup(name)) == NULL)
        {
            return NULL;
        }
        hashval = hash(name);
        np->next = hashtable[hashval];
        hashtable[hashval] = np;
    }
    else
    {
        free((void *)np->defn);
    }
    if ((np->defn = strdup(defn)) == NULL)
    {
        return NULL;
    }
    return np;
}
