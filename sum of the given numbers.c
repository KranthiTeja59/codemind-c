#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;N>=i;i++)
    {
        int a,b;
        scanf("%d	%d",&a,&b);
        printf("%d
",a+b);
    }
    return 0;
}