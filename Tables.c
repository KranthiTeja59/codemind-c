#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d",&n);
    scanf("%d",&m);
    for(a=1;a<=m;a++)
    {
        if(a%2!=0)
        {
          printf("%d x %d = %d
",n,a,n*a);
        }
    }
    return 0;
    
}