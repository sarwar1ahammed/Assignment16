#include <stdio.h>
// Find the sum of rows and columns of a Matrix.
int main()
{
    int r, c, i, j, rowSum, colSum;
    int a[10][10];
    printf("Enter rows size of the matrix : ");
    scanf("%d", &r);
    printf("Enter columns size of the matrix : ");
    scanf("%d", &c);
    printf("Enter %dx%d matrix elements : \n", r, c);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("Element [%d],[%d] : ", i, j);
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
    for (i=0; i<r; i++)
    {
        rowSum=0;
        printf("\nSum of %d rows : ", i);
        for (j=0; j<c; j++)
            rowSum += a[i][j];
        printf("%d", rowSum);
    }
    for (j=0; j<c; j++)
    {
        colSum=0;
        printf("\nSum of %d columns : ", j);
        for (i=0; i<r; i++)
            colSum += a[i][j];
        printf("%d", colSum);
    }
    
    printf("\n");
    return 0;
}
