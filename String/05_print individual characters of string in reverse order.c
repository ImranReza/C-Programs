#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter Your String :");
    gets(s);

    int len=strlen(s),i;

    for(i=len;i>=0;i--)
    {
        printf("%c ",s[i]);
    }
    return 0;
}
