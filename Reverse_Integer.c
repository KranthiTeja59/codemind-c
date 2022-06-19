#include<stdio.h>
int main()
{
    int n,r,rev=0,i;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}