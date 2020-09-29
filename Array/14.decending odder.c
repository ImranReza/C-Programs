#include<stdio.h>
#define W 100
int main()
{
    int A[W],i,j,temp,n;
    printf("How many Number :");
    scanf("%d",&n);

    printf("Enter Your Elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

     for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(A[i]<A[j])
           {
               temp=A[i];
               A[i]=A[j];
               A[j]=temp;
           }

       }
    }
    printf("The Decending odder :\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }

    return 0;
}

