#include<stdio.h>
int main()
{
    int n,i,co=0,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+2>n-1)
        {
            break;
        }
        if(arr[i]%2!=0 && arr[i+2]%2!=0)
        {
            if(arr[i+1]%2!=0)
            {
                co++;
            }
        }
    }
    printf("%d",co);
}