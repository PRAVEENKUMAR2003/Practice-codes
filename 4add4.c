#include <stdio.h>

int main()
{
    int a, c = 0, d = 0, new = 0, old, count = 0;
    printf("Enter no of rows: ");
    scanf("%d", &a);
    printf("Enter no of columns: ");
    scanf("%d", &c);
    int arr[a][a], brr[a][a], crr[a][a];
    printf("Enter matrix 1: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter element [%d,%d] :", i + 1, j + 1);
            scanf("%d", &crr[i][j]);
        }
    }
    printf("transpose of matrix :\n");
    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < a; i++)
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
