#include<stdio.h>
#define N 100
int main()
{
    int A[N];
    int i,s;
    printf("Enter The size of array :");
    scanf("%d",&s);
     //scan the value from the keyboard
    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);

    }
    //find the maximum value
    int max=A[0];

    for(i=0;i<s;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    printf("The Maximum value is : %d",max);

    return 0;
}
