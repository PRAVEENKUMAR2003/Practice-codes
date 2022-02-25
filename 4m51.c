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
    printf("Enter element to find: ");
    scanf("%d", &c);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == c)
        {
            printf("The element is at position %d", i + 1);
            return 0;
        }
    }
    printf("There is no such element in the array!!");
    return 0;
}