#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number :");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is a Even Number",a);
    }
    else
    {
       printf("%d is a Odd Number",a);
    }
    return 0;
}
