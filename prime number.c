#include<stdio.h>
int main()
{
    int m,n=1,count=0;
    scanf("%d",&m);
    while(m>=n)
    {
        if(m%n==0)
        {
          count++;
        }
        n++;
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}