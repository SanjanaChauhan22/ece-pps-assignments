#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    // 3 rows, 3 columns
    int i, j;
    printf("Enter first matrix element: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter second matrix elements: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    //Addition of matrices 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Addition of two matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}