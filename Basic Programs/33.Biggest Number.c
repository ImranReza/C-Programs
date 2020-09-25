#include<stdio.h>
int main()
{
    int a,i;

    printf("How Many Number :");
    scanf("%d",&a);

    int N[a];

    printf("Enter Your Numbers :");

    for(i=0;i<a;i++)
    {
        scanf("%d",&N[i]);
    }

    int max=N[0];

     for(i=0;i<a;i++)
        {
         if(max<N[i])
          {
            max=N[i];
          }

        }

        printf("Biggest Number : %d",max);

        return 0;

}
