#include<stdio.h>
int main()
{
    int N,r,rev=0,i;
    scanf("%d",&N);
    for(i=1;N>0;i++)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    printf("%d",rev);
    return 0;
}