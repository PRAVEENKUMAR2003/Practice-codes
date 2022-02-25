#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter array elements:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j;
    for (int i = 0; i < a - 1 - i; i++)
    {
        j = arr[a - 1 - i];
        arr[a - 1 - i] = arr[i];
        arr[i] = j;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}