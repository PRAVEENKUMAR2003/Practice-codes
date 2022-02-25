#include <stdio.h>

int main()
{
    int a, c = 0, d = 0, new = 0, old, count = 0;
    printf("Enter order of matrix: ");
    scanf("%d", &a);
    int arr[a][a], brr[a][a], crr[a][a];
    printf("Enter matrix 1: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter matrix 2: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("Sum of two matrix :\n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if ((arr[i][j] + brr[i][j]) <= 9) printf("%d     ", (arr[i][j] + brr[i][j]));
            else if ((arr[i][j] + brr[i][j]) <= 99) printf("%d    ", (arr[i][j] + brr[i][j]));
            else if ((arr[i][j] + brr[i][j]) <= 999) printf("%d   ", (arr[i][j] + brr[i][j]));
            else if ((arr[i][j] + brr[i][j]) <= 9999) printf("%d  ", (arr[i][j] + brr[i][j]));
            else if ((arr[i][j] + brr[i][j]) <= 99999) printf("%d ", (arr[i][j] + brr[i][j]));
            else printf("%d ", (arr[i][j] + brr[i][j]));
        }
        printf("\n");
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            for (int k = 0; k < a; k++)
            {
                c += arr[i][k]*brr[k][j]; 
            }
            crr[i][j] = c;
            c = 0;
        }
    }
    printf("\nMultiplication of 2 matrices :\n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if (crr[i][j] <= 9) printf("%d     ", crr[i][j]);
            else if (crr[i][j] <= 99) printf("%d    ", crr[i][j]);
            else if (crr[i][j] <= 999) printf("%d   ", crr[i][j]);
            else if (crr[i][j] <= 9999) printf("%d  ", crr[i][j]);
            else if (crr[i][j] <= 99999) printf("%d ", crr[i][j]);
            else printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}