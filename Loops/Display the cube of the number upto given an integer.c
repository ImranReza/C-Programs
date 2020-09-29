#include<stdio.h>
int main()
{
    int a,i;

    printf("Input Number of Terms :");

    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("Number is : %d and cube of The %d is :%d",i,i,(i*i*i));
        printf("\n");
    }

    return 0;
}
