#include<stdio.h>
int main()
{
    int Y;
    scanf("%d",&Y);
    if(Y%400==0)
    printf("True");
    else if(Y%100==0)
    printf("False");
    else if(Y%4==0)
    printf("True");
    else
    printf("False");
    return 0;
}