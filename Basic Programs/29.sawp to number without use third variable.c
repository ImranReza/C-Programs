#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter The First Number :");
    scanf("%d",&a);

    printf("Enter The Second Number :");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("First Number = %d\nSecond Number = %d",a,b);

    return 0;

}
