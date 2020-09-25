#include<stdio.h>
int main()
{
    int D,days=0,year=0,week=0;
    printf("Enter The Total Days :");
    scanf("%d",&D);

    year=D/365;
    week=(D%365)/7;
    days=(D%365)%7;

    printf("%d = %d Year , %d Week , %d Days",D,year,week,days);

    return 0;

}
