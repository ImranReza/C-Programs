#include<stdio.h>
int main()
{
    char s[100];

    int i=0,l=0;

    printf("Enter Your String :");
    gets(s);

    while(s[i]!='\0')
    {
      printf("%c ",s[i]);
       i++;
    }

    return 0;
}
