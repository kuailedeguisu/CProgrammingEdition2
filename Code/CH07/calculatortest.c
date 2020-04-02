#include <stdio.h>

// The actural result is 0.0 ???
int main()
{
    double sum = 0.0;
    double v;
    while (scanf("%ld", &v) == 1)
    {
        printf("\t%.2f\n", sum += v);
    }
    return 0;
}