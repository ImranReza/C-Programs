#include<stdio.h>
int main()
{
    int i;
    float sum=0,ave=0,a;

    printf("Input 10 Number\n");

    for(i=1;i<=10;i++)
    {
        printf("Number-%d :",i);
        scanf("%f",&a);

        sum=sum+i;
    }

    ave=sum/10;


    printf("The Sum of 10 No Is : %.2f",sum);

    printf("\nThe Average of 10 No Is : %.2f",ave);


    return 0;

}
