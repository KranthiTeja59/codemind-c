#include<stdio.h>
int main()
{
    int N,m,i,sum=0,r;
    scanf("%d",&m);
    N=m;
    for(i=1;m>0;i++)
    {
        r=m%10;
        sum=sum+r;
        m=m/10;
    }
    if(N%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
}