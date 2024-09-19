#include <stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],pro[3][3]={0};
    printf("For matrix1: \n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("Enter element[%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("For matrix2: \n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("Enter element[%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            for(int k = 0;k<3;k++)
            {
                pro[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product matrix: \n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }
}