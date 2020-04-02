#include <stdio.h>
#include "../CH05/qsort.h"

int main()
{
    int arr[] = { 10, 8, 20, 30, 1, 5};
    unsigned len = sizeof(arr)/sizeof(arr[0]);
    printf("len=%u\n", len);
    quicksort(arr, 0, len - 1);
    for (unsigned i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
