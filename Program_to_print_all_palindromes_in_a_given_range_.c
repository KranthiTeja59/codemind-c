#include<stdio.h>
int main()
{
    int a,b,i,r,rev,temp;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        temp=i;
        rev=0;
        while (temp>0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
    return 0;
}