#include<stdio.h>
int main()
{
    char s[100];

    int i=0,l=0;

    printf("Enter Your String :");
    gets(s);

    while(s[i]!='\0')
    {
       l++;
       i++;
    }

    printf("length = %d",l);

    return 0;
}
