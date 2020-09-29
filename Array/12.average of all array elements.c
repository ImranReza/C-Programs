#include<stdio.h>
#define N 100
int main()
{
    int A[N],s,i,sum=0,ave;

    printf("Enter The size of The Array :");
    scanf("%d",&s);

    printf("Enter The array elements :");

    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    ave=sum/s;

    printf("ave = %d",ave);

    return 0;


}
