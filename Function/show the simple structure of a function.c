#include<stdio.h>

int result (int a,int b)

{
    int sum=0;
    sum=a+b;

    return sum;
}
int main()
{
    int a=6,b=5;

    printf("Sum = %d",result(a,b));

    return 0;
}
