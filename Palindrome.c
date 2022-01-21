#include<stdio.h>
int main()
{
    int N,r,rev=0,temp;
    scanf("%d",&N);
    temp=N;
    while(N!=0)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}