#include <stdio.h>
#include <ctype.h>

int myatoi2(char s[]);

main()
{
    char str[] = "     +123456";
    printf("%d\n", myatoi2(str));
    return 0;
}


int myatoi2(char s[])
{
    int i, n, sign;
    for (i = 0; isspace(s[i]); ++i)
        ;
    
    sign = s[i] == '-' ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }

    for (n = 0; isdigit(s[i]); ++i)
    {
        n = 10 * n + s[i] - '0';
    }

    return sign * n;

}