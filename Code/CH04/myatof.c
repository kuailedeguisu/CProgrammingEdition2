#include <stdio.h>
#include <ctype.h>

double myatof(char str[]);

main()
{
    printf("%f\n", myatof("    -123.789"));
    return 0;
}

double myatof(char str[])
{
    int i, sign;
    double var, power;
    for(i = 0; isspace(str[i]); ++i)
        ;
    sign = str[i] == '-' ? -1 : 1;
    if (str[i] == '+' || str[i] == '-')
    {
        i++;
    }

    for (var = 0.0; isdigit(str[i]); ++i)
    {
        var = 10.0 * var + str[i] - '0';
    }

    if (str[i] == '.')
    {
        i++;
    }
    for (power = 1.0; isdigit(str[i]); ++i)
    {
        var = 10.0 * var + str[i] - '0';
        power *= 10.0;
    }
    return sign * var / power;
}