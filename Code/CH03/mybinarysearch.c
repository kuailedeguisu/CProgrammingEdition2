#include <stdio.h>

int mybinarysearch(int target, int arr[], int n);

main()
{
    int arr[] = {1, 2, 6, 8, 9, 10, 80, 90};
    printf("%d\n", mybinarysearch(10, arr, sizeof(arr)/sizeof(arr[0])));
    return 0;
}

int mybinarysearch(int target, int arr[], int n)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}