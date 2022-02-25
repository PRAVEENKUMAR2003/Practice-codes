#include <stdio.h>
int main()
{
    int a,b, c = 0, d, new = 0, begin, end;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &a);
    printf("Input %d elements in the array : ", a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &b);
    printf("Input %d elements in the array : ", b);
    int brr[b], crr[a + b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &brr[i]);
    }
    c = a - 1, d = b - 1;
    for (int i = 0; i < a + b; i++)
    {
        if (c > -1 && d > -1)
        {
            (arr[c] >= brr[d]) ? (crr[i] = arr[c--]) : (crr[i] = brr[d--]);
        }
        else if (c >= 0 && d <= -1)
        {
            crr[i] = arr[c--];
        }
        else if (c <= -1 && d >= 0)
        {
            crr[i] = brr[d--];
        }
    }
    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", crr[i]);
    }
    return 0;
}
