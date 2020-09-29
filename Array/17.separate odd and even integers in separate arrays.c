#include<stdio.h>
#define A 100
int main()
{
    int D[A],E[A],F[A],i,j=0,k=0;
    int n;
    printf("How Many Number :");
    scanf("%d",&n);

    printf("Enter your numbers :\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&D[i]);
    }

    for(i=0;i<n;i++)
    {
        if(D[i]%2==0)
        {
            E[j]=D[i];
            j++;
        }
        else{
            F[k]=D[i];
            k++;
        }
    }

    printf("\nThe Even number :\n");

    for(i=0;i<j;i++)
    {
        printf("%d ",E[i]);
    }


     printf("\nThe Odd Number :\n");

    for(i=0;i<k;i++)
    {
	printf("%d ", F[i]);
    }

    return 0;
}
