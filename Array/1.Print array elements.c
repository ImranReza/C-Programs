#include<stdio.h>
int main()
{
    int array[10];
    int i;
    //scan array element from keyboard
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    //print the array element
   for(i=0;i<10;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
