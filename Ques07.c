#include <stdio.h>
// Print or display the lower triangular of a given matrix.
int main()
{
    int r, c, i, j;
    int a[10][10];
    printf("Enter rows no. : ");
    scanf("%d", &r);
    printf("Enter columns no. : ");
    scanf("%d", &c);
    printf("Enter matrix elements : \n");
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
    printf("Lower Triangular Matrix is : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (j<=i)
                printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
