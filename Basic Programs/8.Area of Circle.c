#include<stdio.h>
#define PI 3.1416
int main()
{
   int r;
   float area;

   printf("Enter The Radius :");
   scanf("%d",&r);

   area=PI*(r*r);

   printf("Area of Circle : %f",area);


    return 0;
}

