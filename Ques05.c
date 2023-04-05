#include <stdio.h>
// Find the sum of left diagonals of a matrix.
int main()
{
    int r, i,j, sum=0;
    int a[10][10];
    printf("Enter square matrix dimension range : ");
    scanf("%d", &r);
    printf("Enter %dx%d matrix elements : \n", r, r);
    for (i=0; i<r; i++)
    {
        for (j=0; j<r; j++)
        {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
            if (i == j)
                sum += a[i][j];

        }
    }
    printf("Matrix is : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<r; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    printf("Sum of Left diagonals matrix is : %d", sum);
    
    printf("\n");
    return 0;
}
