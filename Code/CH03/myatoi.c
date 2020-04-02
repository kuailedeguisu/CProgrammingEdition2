#include <stdio.h>

int myatoi(char str[]);

main()
{
    int c;
    char str[100] = "2345787";
    printf("%d\n", myatoi(str));
    return 0;
}

int myatoi(char str[])
{
    int i, n = 0;
    for (i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
    {
        n = 10 * n + str[i] - '0';
    }
    return n;
}