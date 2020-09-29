#include<stdio.h>
#define N 100
int main()
{
    int Arr[N],dup[N];;
    int i,j,s,c;

    printf("Enter The size of array :");
    scanf("%d",&s);

    printf("\nEnter The array elements :\n");

    for(i=0;i<s;i++)
    {
        scanf("%d",&Arr[N]);
        dup[i]=-1;
    }

    for(i=0;i<s;i++)
    {
        c=1;
            for(j=i+1;j<s;j++)
            {
              if (Arr[i]==Arr[j])
              {
                  c++;
                  dup[j]=0;
              }
            }

            if(dup[i]!=0)
            {
                dup[i]=c;
            }
    }

    printf("The Unique elements are :");

    for(i=0;i<s;i++)
    {
        if(dup[i]==1)
        {
            printf("%d\n",Arr[i]);
        }
    }

    return 0;

}
