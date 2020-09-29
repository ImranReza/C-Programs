#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i,j,n,c=0;
    printf("Enter Size of Array :");
    scanf("%d",&n);
    //scan the array elements from keyboard
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //find the duplicate element in thE array
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if( arr[i]==arr[j])
           {
               c++;
               break;
           }

        }
    }

    printf("Total duplicate elements in the array : %d",c);
    return 0;
}

