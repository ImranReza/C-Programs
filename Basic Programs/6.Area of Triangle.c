#include<stdio.h>
int main()
{
    int b,h,area=0;
    printf("Enter The Base :");
    scanf("%d",&b);

    printf("Enter The Height");
    scanf("%d",&h);

    area=0.5*b*h;

    printf("Area of triangle=%d",area);
    return 0;
}
