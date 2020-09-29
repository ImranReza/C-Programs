
#include<stdio.h>
int main()
{
    int i,j,a;

    printf("Enter Your Number :");

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i;j++)
        {
            printf("%c ",i+65);
        }
       printf("\n");
    }

    return 0;
}

