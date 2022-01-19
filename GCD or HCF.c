#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    while(N!=M)
    {
        if(M>N)
        {
            M=M-N;
        }
        else
        {
            N=N-M;
        }
    }
    printf("%d",M);
    return 0;
}