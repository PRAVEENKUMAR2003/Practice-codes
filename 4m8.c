#include <stdio.h>

int main()
{
    int a, c = 0, d = 0, new = 0, old, count = 0;
    printf("Enter order of matrix: ");
    scanf("%d", &a);
    int arr[a][a], brr[a], crr[a];
    printf("Enter matrix : \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                brr[i] = arr[i][j];
            }
            if (i + j == a - 1)
            {
                crr[i] = arr[i][j];
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if (i == j)
            {
                arr[i][j] = crr[i];
            }
            if (i + j == a - 1)
            {
                arr[i][j] = brr[i];
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if (arr[i][j] <= 9) printf("%d     ", arr[i][j]);
            else if (arr[i][j] <= 99) printf("%d    ", arr[i][j]);
            else if (arr[i][j] <= 999) printf("%d   ", arr[i][j]);
            else if (arr[i][j] <= 9999) printf("%d  ", arr[i][j]);
            else if (arr[i][j] <= 99999) printf("%d ", arr[i][j]);
            else printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}