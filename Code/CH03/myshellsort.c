#include <stdio.h>

void myshellsort(int v[], int n);

main()
{
    int arr[] = {10, 3, 5, 29, 30, 20, 7, 8};
    int len = sizeof(arr)/ sizeof(arr[0]);
    myshellsort(arr, len);
    int i;
    for (i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void myshellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; ++i)
        {
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j+gap] = temp;
            }
        }
    }
}