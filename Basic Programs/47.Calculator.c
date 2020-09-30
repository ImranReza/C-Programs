#include<stdio.h>
int main()
{
    float a,b, Result=0;
    char ch;

    printf("Press '+' For Sum .\nPress '-' For subtraction .\nPress '*' For multiplication.\nPress '/' For Divide .\nPress :");

    scanf("%c",&ch);

    printf("\nEnter Two Number :");
    scanf("%f %f",&a,&b);


    switch(ch)
    {
    case '+':
        Result=a+b;
        break;
    case '-':
        Result=a-b;
        break;
    case '*':
        Result=a*b;
        break;
    case '/':
        Result=a/b;
        break;
    }
    printf("Result = %f",Result);

    return 0;
}
