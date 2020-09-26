#include<stdio.h>
int main()
{
    int N,R,sum=0;

    printf("Enter Your Number :");
    scanf("%d",&N);

    while(N!=0)
    {
        R=N%10;
        sum=(sum*10)+R;
        N=N/10;
    }

    printf("Reverse Number = %d",sum);

    return 0;
}

