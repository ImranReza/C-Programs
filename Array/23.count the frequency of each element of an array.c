#include<stdio.h>
#define W 100
int main()
{
    int A[W],V[W],i,j,S,n;

    printf("Enter The Size of Array :");

    scanf("%d",&n);

    printf("Enter The Elements of Array :\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        V[i]=-1;
    }

    for(i=0;i<n;i++)
    {
        S=1;
        for(j=i+1;j<n;j++)
        {
           if( A[i]==A[j])
           {
            S++;
            V[j]=0;

           }
        }

        if(V[i]!=0)
        {
            V[i]=S;
        }
    }
     printf("\nThe frequency of all elements of array : \n");\

    for(i=0;i<n;i++)
    {
        if(V[i]!=0)
        {
            printf("%d occurs %d times\n", A[i], V[i]);
        }
    }

    return 0;
}
