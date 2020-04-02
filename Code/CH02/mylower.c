#include <stdio.h>

int lower(int c);

main()
{
    int c;
    printf("Please enter a char\n");
    scanf("%c", &c);
    printf("%c\n", lower(c));
    return 0;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 'a' - 'A';
    }
    else
    {
        return c;
    }
}