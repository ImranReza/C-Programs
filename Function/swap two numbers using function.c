#include<stdio.h>

int swap();

int main()
{
    int a,b;
    printf("Enter Two Number :");
    scanf("%d %d",&a,&b);

    printf("\nBefore swapping: a = %d and b = %d",a,b);

    swap(a,b);

    return 0;
}

int swap(int a,int b)
{
    int s;
    s=a;
    a=b;
    b=s;

   printf("\nAfter swapping : a = %d and b = %d\n",a,b);
}
