#include<stdio.h>
int main()
{
    int a,i,j;

    printf("Input The Number :");

    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {

        for(j=1;j<=a;j++)
        {
            printf("%d X %d = %d ,",i,j,i*j);
        }

        printf("\n");

        }

    return 0;
}

