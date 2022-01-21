#include<stdio.h>
int main()
{
    int N,sum=0,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}