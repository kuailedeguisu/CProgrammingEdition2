#include <stdlib.h>
#include <stdio.h>

int main()
{
    // [0, 1)
    printf("%f\n", rand() / (RAND_MAX + 1.0));
    srand(10);
    return 0;
}