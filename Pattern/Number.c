#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a Number :");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

