#include<stdio.h>
#define W 100
int main()
{
    int A[W],A1[W],A2[W],i,j,n,n1,n2,temp;
    printf("How many number :");
    scanf("%d",&n);
    printf("Enter your first array elements number :\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&A[i]);
    }
    printf("How many number :");
    scanf("%d",&n1);
      printf("Enter your second array elements number :\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&A1[i]);
    }

    n2=n+n1;

    for(i=0;i<n;i++)
    {
        A2[i]=A[i];

    }
    for(j=0;j<n;j++)
    {
        A2[i]=A1[j];
        i++;

    }

    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(A2[i]<A2[j])
        {
            temp=A2[i];
            A2[i]=A2[j];
            A2[j]=temp;
        }
      }
    }
    printf("The Decending oder \n");
    for(i=0;i<n2;i++)

    {
        printf("%d",A2[i]);
    }

    return 0;

}



