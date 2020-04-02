#include <string.h>
#include <stdio.h>

void myreverse(char str[]);

main()
{
    char str[] = "Hello World!";
    myreverse(str);
    printf("Reverse str=%s\n", str);
    return 0;
}

void myreverse(char str[])
{
    int i, j, temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}