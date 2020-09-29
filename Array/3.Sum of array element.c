#include<stdio.h>
#define N 100
int main()
{
    int i,a[N],r,sum=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&r);
    printf("Enter the array elements\n");

    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    //print the sum
    printf("Sum = %d",sum);
    return 0;
}
