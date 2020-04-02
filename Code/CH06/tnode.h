typedef struct tnode * Treeptr;
typedef struct tnode
{
    char *word;
    int count;
    Treeptr left;
    Treeptr right;
} Treenode;

Treeptr addtree(Treeptr, char *);
void printtree(Treeptr);
Treeptr talloc(void);
char *strtup(char *);
