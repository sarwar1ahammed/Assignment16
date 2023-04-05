#include <stdio.h>
// Calculate the product of two matrices each of order 3x3.
int main()
{

    int i, j, k;
    int a[3][3], b[3][3], pro[3][3];
    printf("Enter 1st 3x3 matrices elements : \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("1st Matrix is : \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    printf("Enter 2nd 3x3 matrices elements : \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("2nd Matrix is : \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
            printf("%3d", b[i][j]);
        printf("\n");
    }
    printf("Product of two matrices is : \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            pro[i][j] = 0;
            for (k=0; k<3; k++)
            {
                pro[i][j] += a[i][k] * b[k][j];
                
            }
            printf("%3d", pro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
