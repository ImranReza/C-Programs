#include<stdio.h>
#define N 100
int main()
{
    int A[N];
    int i,s;
    printf("Enter The size of array :");
    scanf("%d",&s);

    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);

    }

    int max=A[0];

    for(i=0;i<s;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }

    int max1=A[0];

    for(i=0;i<s;i++)
    {
        if(max1<A[i] && max>A[i])
        {
            max1=A[i];
        }
    }
    printf("The second max value is : %d",max1);

    return 0;
}
