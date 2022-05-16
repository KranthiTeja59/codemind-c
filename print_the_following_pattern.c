#include<stdio.h>
int main()
{
    int N,j,m,i;
    scanf("%d",&N);
    m=65+N;
    for(i=65;i<m;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
    return 0;
}