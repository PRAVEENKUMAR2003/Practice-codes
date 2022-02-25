#include <stdio.h>
int main()
{
    int a,b, c = 0, d, new = 0, begin, end, f[100000] = {0};
    printf("Input the number of elements : ");
    scanf("%d", &a);
    printf("Input %d elements in the array : ", a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
        f[arr[i]]++;
    }
    for (int i = 0; i < 100000; i++)  
    {
        if (f[i])
        {
            printf("frequency of %d is %d\n", i, f[i]);
        }
    }
    return 0;
}
