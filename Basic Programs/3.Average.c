#include<stdio.h>
int main()
{
    float a,b,c,ave,sum=0;
    printf("Enter The first value :");
    scanf("%f",&a);
    printf("Enter The second value :");
    scanf("%f",&b);
    printf("Enter The Third value :");
    scanf("%f",&c);
    sum=a+b+c;
    ave=sum/3;
    printf("Average=%f",ave);
    return 0;
}
