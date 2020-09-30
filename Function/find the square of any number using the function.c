#include<stdio.h>
float square(float a)
{
    float s = a*a;

     return s;
}

int main()
{
    float a;
    printf("Enter Your Number :");
    scanf("%f",&a);

    printf("The square of %.2f is : %.2f",a,square(a));
}



