#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number :");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is a Positive Number",a);
    }
    else
    {
       printf("%d is a Negative Number",a);
    }
    return 0;
}

