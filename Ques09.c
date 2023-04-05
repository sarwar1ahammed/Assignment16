#include <stdio.h>
//  Accept a matrix and determine whether it is a sparse matrix.
int main()
{
    int r, c, i, j, zero=0, nonZero=0;
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
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (a[i][j] == 0)
                zero++;
            else  
                nonZero++;  

        }
    }
    if (zero > nonZero)
        printf("Sparse Matrix as %d no. of Zero & %d no. of Non Zero Values", zero, nonZero);
    else
        printf("Non Sparse Matrix as %d no. of Zero & %d no. of Non Zero Values", zero, nonZero);
    printf("\n");
    return 0;
}
