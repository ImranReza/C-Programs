//Write a program in C to insert New value in the array (sorted list )
#include<stdio.h>
#define W 100
int main()
{
    int A[W],i,n,Q,V;
    printf("H0w Many Number :");
    scanf("%d",&n);

    printf("Enter Your Element:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter The value You insert :");
    scanf("%d",&Q);
    //the position where the new value will be insert
    for(i=0;i<n;i++)
    {
        if(Q<A[i])
        {
            V=i;
            break;
        }
    }

    for(i=n;i>=V;i--)
    {
        A[i]=A[i-1];
      //insert value at the proper position
        A[V]=Q;
    }

    printf("After insert value in a array :\n");

    for(i=0;i<=n;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
