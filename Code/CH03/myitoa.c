#include <stdio.h>
#include <string.h>

void myitoa(int n, char str[]);
void myreverse(char str[]);

main()
{
    int num;
    char str[100];
    printf("Please enter an integer:");
    scanf("%d", &num);
    myitoa(num, str);
    printf("%s\n", str);
    return 0;
}

void myitoa(int n, char str[])
{
    int i, sign;
    if ((sign = n) < 0)
    {
        n = -n;
    }
    
    i = 0;
    do
    {
        str[i++] = n % 10 + '0';
    } while ( (n /= 10) > 0);

    if (sign < 0)
    {
        str[i++] = '-';
    }
    str[i] = '\0';
    myreverse(str);
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