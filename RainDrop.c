#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%3==0 || N%5==0 ||N%7==0)
    {
       if(N%3==0) 
       printf("Pling");
       if(N%5==0)
       printf("Plang");
       if(N%7==0)
       printf("Plong");
    }
    else
    printf("%d",N);
    return 0;
}