#if 0
// method 1
#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
#endif

// method 2
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
    }

}
