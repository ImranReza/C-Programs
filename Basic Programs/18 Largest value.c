#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is Largest",a);

    }
    else{
        printf("%d is largest",b);
    }

   return 0;
}
