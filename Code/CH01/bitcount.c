#include <stdio.h>

int bitcount(unsigned i);

main()
{
    printf("Please enter an integer:\n");
    unsigned num;
    scanf("%d", &num);
    printf("%d\n", bitcount(num));
    return 0;
}

int bitcount(unsigned i)
{
    int b = 0;
    for (; i != 0; i >>= 1)
    {
        if (i & 01)
        {
            b++;
        }
    }

    return b;
}