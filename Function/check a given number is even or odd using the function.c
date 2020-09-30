#include<stdio.h>

int cheak(int a)
{
    int r = a%2;

    return r;
}
int main()
{
    int a,s;

    printf("Enter A Number :");
    scanf("%d",&a);

    s=cheak(a);

    if(s==0)
    {
        printf("%d is Even Number ",a);
    }
    else
    {
       printf("%d is ODD Number ",a);
    }

    return 0;

}
