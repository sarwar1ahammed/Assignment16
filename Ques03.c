#include <stdio.h>
// Find the transpose of a given matrix.
int main()
{
    int r, c, i,j;
    int tra[10][10];
    printf("Enter number of Rows of the matrices : ");
    scanf("%d", &r);
    printf("Enter number of Coloumn of the matrices : ");
    scanf("%d", &c);
    printf("Enter Matrices Elements : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &tra[i][j]);
        }     
    }
    printf("Matrix is : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
            printf("%3d", tra[i][j]);
        printf("\n");
    }
    printf("Transpose of the matrics is : \n");
    for (j=0; j<c; j++)
    {
        for (i=0; i<r; i++)
            printf("%3d", tra[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
