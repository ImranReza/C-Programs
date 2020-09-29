#include<stdio.h>
#define N 100
int main()
{
    int i,a[N],a1[N],r,sum=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&r);
    printf("Enter the array elements\n");

    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
   //Copy the elements one array into another array
    for(i=0;i<r;i++)
    {
       a1[i]=a[i];
    }
    printf("\nfirst array elements :\n");

    for(i=0;i<r;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nsecond array elements :\n");

    for(i=0;i<r;i++)
    {
        printf("%d ",a1[i]);
    }


    return 0;
}

