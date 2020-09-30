#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter Two Number :");
    scanf("%d %d",&num1,&num2);
     /* Expression (num1 > num2) will return either 0 or 1 */
    switch(num1>num2)
    {
    case 0 :
        printf("%d is Maximum",num2);
        break;
    case 1:
         printf("%d is Maximum",num1);
        break;

    }

    return 0;
}
