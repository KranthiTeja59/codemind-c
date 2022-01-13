#include<stdio.h>
int main()
{
    int N,sum=0,sq,r,i;
    scanf("%d",&N);
    sq=N*N;
    for(i=1;sq>=i;i++)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==N)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}