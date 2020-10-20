#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=1,i=0;

    printf("Enter Your String :");
    gets(s);

    while(s[i]!='\0')
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
        {
            c++;
        }
        i++;
    }

    printf("Total Word is = %d",c);

    return 0;
}
