#include<stdio.h>
int main()
{
    float salary=0;

    printf("Enter The Salary of The Employee :");
    scanf("%f",&salary);

    if(salary<=5000)
        {
            printf("The Grade Of The Employee is C");
        }
    else if(salary<40000)
        {
            printf("The Grade Of The Employee is B");
        }
       else if(salary>=40000)
        {
            printf("The Grade Of The Employee is A");
        }

        return 0;
}
