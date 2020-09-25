#include<stdio.h>
int main()
{
    char ch;

    printf("Enter A character:");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is a Alphabet",ch);

    }
    else{
        printf("%c is not a Alphabet",ch);
    }

    return 0;
}
