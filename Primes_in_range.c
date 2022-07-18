#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,fl,c;
    int l,r;
    scanf("%d",&l);
    scanf("%d",&r);
    c=0;
    for(n=l;n<=r;++n)
    {
        if(n==1)
        {
            continue;
        }
        fl=0;
        for(i=2;i<=sqrt(n);++i)
        {
            if(n%i==0)
            {
                fl=1;
                break;
            }
        }
        if(fl==0)
        {
            ++c;
        }
    }
    printf("%d",c);
}