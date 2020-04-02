#include <stdio.h>

main()
{
    int c, i, nwhite, nother;
    int ndigits[10];
    nwhite = nother = 0;

    for (i = 0; i < 10; ++i)
    {
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigits[c - '0'];
        }
        else if ( c == ' ' || c == '\n' || c == '\t')
        {
            nwhite++;
        }
        else
        {
            nother++;
        }
        
    }
    printf("nwhite=%d, nother=%d\n", nwhite, nother);
    printf("digits:\n");
    for (i = 0; i < 10; ++i)
    {
        printf("The number of %d is %d\n", i, ndigits[i]);
    }
}