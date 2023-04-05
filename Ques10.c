#include <stdio.h>
// Find the row with maximum number of 1s.
int main()
{
    int r, c, i, j;
    int a[10][10];
    printf("Enter total rows : ");
    scanf("%d", &r);
    printf("Enter total columns : ");
    scanf("%d", &c);
    printf("Enter Matrix Elements : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }   
    }
    printf("Matrix is : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }

    for 


    printf("\n");
    return 0;
}
