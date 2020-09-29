#include<stdio.h>
#define W 100
int main()
{
    int A[W][W];
    int i,j,n,n2;
    printf("Enter The Size of matrix :");
    scanf("%d",&n);
    printf("Input elements in the first matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    int A2[W][W];

    printf("Input elements in the second matrix :\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        {
            scanf("%d",&A2[i][j]);
        }
    }


    int A3[W][W];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            A3[i][j]=A[i][j]-A2[i][j];
        }
    }

    printf("The Subtraction of two matrix is : \n");


       for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",A3[i][j]);
        }
        printf("\n");
    }

    return 0;

}
