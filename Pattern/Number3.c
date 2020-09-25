#include<stdio.h>
int main()
{
     int a,i,j;
    printf("Enter a Number :");
    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
        for(j=a;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
