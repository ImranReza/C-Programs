#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter Your Number :");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {

      if(i%2==0)
      {
          printf("%d\n",i);
      }
    }
    return 0;
}


