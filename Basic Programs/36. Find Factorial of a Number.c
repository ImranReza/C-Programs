#include<stdio.h>
int main()
{
    int i,fact=1,a;

    printf("Enter a Number :");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d",fact);

    return 0;

}
