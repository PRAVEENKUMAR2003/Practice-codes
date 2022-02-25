#include <stdio.h>
int main()
{
    int a, c = 0, new = 0, begin, end;
    printf("Enter Number of elements: ");
    scanf("%d", &a);
    printf("Enter sorted array elements:\n");
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to find: ");
    scanf("%d", &c);
    begin = 0, end = a - 1;
    while(1)
    {
        new = (begin + end)/2;
        if (arr[new] ==  c)
        {
            printf("Element is at position %d", new + 1);
            return 0;
        }
        if (begin >= end) 
        {
            printf("NO such element");
            return 0;
        }
        if (arr[new] < c)
        {
            begin = new + 1;
        }
        if (arr[new] > c)
        {
            end = new - 1;
        }
    }
}