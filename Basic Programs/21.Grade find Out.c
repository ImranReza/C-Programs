#include<stdio.h>
int main()
{
    int s;
    printf("Enter Your Grade :");
    scanf("%d",&s);
   if(s<=0 || s>=101)
   {
       printf("Enter A Right Value");
   }
   else
   {
    if(s>=80 && s<=100)
    {
        printf("Your Grade is A+");
    }
     else if(s>=70 && s<=79)
    {
        printf("Your Grade is A");
    }
     else if(s>=60 && s<=69)
    {
        printf("Your Grade is A-");
    }
     else if(s>=50 && s<=59)
    {
        printf("Your Grade is B");
    } else if(s>=40 && s<=49)
    {
        printf("Your Grade is C");
    } else if(s>=33 && s<=39)
    {
        printf("Your Grade is D");
    }
    else{
        printf("Your Grade is F");
    }
   }
    return 0;
}
