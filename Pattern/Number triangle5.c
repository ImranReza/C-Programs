
#include<stdio.h>
int main()
{
    int i,j,a;

    printf("Enter Your Number :");

    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i+1-1;j++)
        {
            printf("%d ",i);
        }
       printf("\n");
    }

    return 0;
}

