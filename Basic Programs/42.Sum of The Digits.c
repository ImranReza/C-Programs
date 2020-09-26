#include<stdio.h>
int main()
{
    int N,R,sum=0;

    printf("Enter Your Number :");
    scanf("%d",&N);

    while(N!=0)
    {
        R=N%10;
        sum=sum+R;
        N=N/10;
    }

    printf("Sum = %d",sum);

    return 0;
}
