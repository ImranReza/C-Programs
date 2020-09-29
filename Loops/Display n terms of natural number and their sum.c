#include<stdio.h>
int main()
{
    int i,a,sum=0;

    printf("Enter Your Number :");

    scanf("%d",&a);

    printf("\n\nThe first %d Natural Number is :",a);

    for(i=1;i<=a;i++)
    {
        printf("%d ",i);

        sum=sum+i;
    }

    printf("\n\nThe Sum of Natural Number upto %d terms : %d",a,sum);
    return 0;
}
