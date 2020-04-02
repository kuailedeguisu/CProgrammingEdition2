#include <stdio.h>
#include <string.h>

int mytrim(char str[]);

main()
{
    char str[] = "hello world   \n ";
    printf("%d\n", mytrim(str));
    printf("%s\n", str);
    return 0;
}

int mytrim(char str[])
{
    int n;
    for ( n = strlen(str) - 1; n >= 0; n--)
    {
        if (str[n] != ' ' && str[n] != '\n' && str[n] != '\t')
        {
            break;
        }
    }
    str[n + 1] = '\0';
    return n;
}