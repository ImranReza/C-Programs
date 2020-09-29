#include<stdio.h>
int main()
{
    int i,n,array[100];
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array :\n\n",n);
    //scan array element from keyboard
    printf("The values store into the array are :\n\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The values store into the array in reverse are :\n\n");
    //print the array element in reverse odder
   for(i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

