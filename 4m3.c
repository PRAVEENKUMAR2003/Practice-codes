#include <stdio.h>
int main()
{
    int a, c = 0, new = 0, old, count = 0;
    printf("Enter Number of elements: ");
    scanf("%d", &a);
    printf("Enter array elements:\n");
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int hi = -1000000, hi2 = -1000000;
    for (int i = 0; i < a; i++)
    {
        if(arr[i] > hi)
        {
            hi2 = hi;
            hi = arr[i];
        }
        else if (arr[i] > hi2)
        {
            hi2 = arr[i];
        }
    }
    printf("the pair of numbers in an unsorted array such that their sum is the largest are %d and %d", hi, hi2);






    return 0;
}