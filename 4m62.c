#include <stdio.h>
int main()
{
    int a, c = 0, d = 0, min = 0, old, count = 0;
    printf("Enter Number of elements: ");
    scanf("%d", &a);
    printf("Enter array elements:\n");
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {
        min = arr[i];
        d = i;
        for (int j = i + 1; j < a; j++)
        {
            if (arr[j] < min)//|| j == i)
            {
                min = arr[j];
                d = j;
            }
        }
        count = arr[i];
        arr[i] = arr[d];
        arr[d] = count;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
