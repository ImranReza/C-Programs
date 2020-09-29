#include<stdio.h>
#define W 100
int main()
{
    int f[W][W],s[W][W],r[W][W];
    int r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for second matrix : ");
    scanf("%d%d",&r2,&c2);

    while(c1 != r2)
    {
        printf("Error!,The first matrix column and second matrix row are not same\n");

    printf("Enter rows and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for second matrix : ");
    scanf("%d%d",&r2,&c2);
    }

    printf("Enter The Value of First Matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d ",&f[i][j]);
        }
    }

     printf("Enter The Value of second Matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d ",&f[i][j]);
        }
    }

    //multiplication


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+f[i][k]*s[k][j];
            }
            r[i][j]=sum;
            sum=0;
        }
    }


    printf("The Result of Matrix Multiplication :\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",r[i][j]);
        }
    }

    return 0;
}
