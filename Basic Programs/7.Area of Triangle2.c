#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s=0,area=0;
    printf("Enter The Frist value :");
    scanf("%f",&a);

    printf("Enter The second value :");
    scanf("%f",&b);

     printf("Enter The third value :");
    scanf("%f",&c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle=%f",area);
    return 0;
}

