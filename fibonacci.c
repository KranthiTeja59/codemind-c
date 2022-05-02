#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    arr[0]=0,arr[1]=1;
    for(i=2;i<N;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
    
}