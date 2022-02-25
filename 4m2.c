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
    for(int i = 0; i < a; i++)
    {
        old = arr[i];
        while(old)
        {
            c = old%10;
            new = new*10 + c;
            old /= 10;
        }
        if (arr[i] == new) count++;
        new = 0;
    }
    printf("there are/is %d palindrome(s)\n", count);
    return 0;
}
