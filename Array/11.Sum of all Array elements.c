#include<stdio.h>
#define N 100
int main()
{
    int A[N],s,i,sum=0;

    printf("Enter The size of The Array :");
    scanf("%d",&s);

    printf("Enter The array elements :");

    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }

    printf("Sum = %d",sum);

    return 0;


}
