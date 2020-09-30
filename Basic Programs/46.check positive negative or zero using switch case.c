
#include<stdio.h>
int main()

{
    int num;

    printf("Enter a Number :");
    scanf("%d",&num);

    switch(num>0)
    {
   case 0:
       switch(num<0)/* Expression (num>0) will return either 0 or 1 */
       {
       case 1 :
        printf("%d is Negative ",num); /* Expression (num<0) will return either 0 or 1 */
        break;
       case 0 :
        printf("%d is Zero",num);
        break;
       }
       break;

   case 1:
       printf("%d is Positive ",num);
          break;


    }
    return 0;
}
