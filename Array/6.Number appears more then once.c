#include<stdio.h>
int main()
{
    int seen[10]={0};
    int n,r;
    printf("Enter The Number :");
    scanf("%d",&n);
    //cheek the number one by one and when condition is true the loop is break and print the ans
    while(n>0)
    {
        r=n%10;
        if(seen[r]==1)
        {
            break;
        }
        seen[r]=1;
        n=n/10;
    }
    if(n>0)
    {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
