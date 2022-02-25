#include <stdio.h>
int main()
{
    int a, c = 0, new = 0, old, count = 0;
    printf("Enter Number of elements: ");
    scanf("%d", &a);
    printf("Enter array elements:\n");
    int arr[10000];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position and value: ");
    scanf("%d%d", &c, &new);
    for(int i = a; i >= c; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[c - 1] = new;
    a++;
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}