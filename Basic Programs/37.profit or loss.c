#include<stdio.h>
int main()
{
    float C,S,P,L;

    printf("Enter The Cost price and Selling price of Product :");

    scanf("%f %f",&C,&S);

    P=S-C;

    L=S-C;

    if(P>0)
    {
        printf("The Seller has made Profit of %.2f",P);
    }
    if(L<0)
    {
        printf("The Seller has made loss of %.2f",L);
    }
    if(P==0)
    {
        printf("The seller hse made no profit and no loss");
    }

    return 0;
}
