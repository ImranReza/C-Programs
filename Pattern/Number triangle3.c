
#include<stdio.h>
int main()
{
    int i,j,a;

    printf("Enter Your Number :");

    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("%d ",i);
        }
       printf("\n");
    }

    return 0;
}
