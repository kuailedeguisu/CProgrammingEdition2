#include <stdio.h>
#define LEN 10

main()
{
    int i, c, nwhite, nother, ndigit[LEN];
    nwhite = nother = 0;
    for (i = 0; i < LEN; ++i)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        switch(c)
        {
            case '0': case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9':
                ndigit[c - '0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
        }
    }
    printf("ndigit:");
    for (i = 0; i < LEN; ++i)
    {
        printf("%d ", ndigit[i]);
    }
    printf("nwhite=%d, nother=%d\n", nwhite, nother);
    return 0;
}