#include<stdio.h>
int main()
{
    int n,i,r,sum=0,pro=1,res;
    scanf("%d",&n);
    while(n>=i)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        pro=pro*r;
        i++;
    }
    res=pro-sum;
    printf("%d",res);
    return 0;
    
    
}