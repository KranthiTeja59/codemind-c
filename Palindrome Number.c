#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T>0)
    {
        int n,rev=0,temp,r;
        scanf("%d",&n);
        temp=n;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(temp==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        T--;
    }
    return 0;
}