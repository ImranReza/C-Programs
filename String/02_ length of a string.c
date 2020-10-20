#include<stdio.h>
#include<string.h>
int main()
{
    int n[20];
    int len;

    printf("Enter Your String :");
    gets(n);

    len=strlen(n);

    printf("Length = %d",len);

    return 0;
}
