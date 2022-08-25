#include<stdio.h>
int main()
{
    int i,n,a;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            a=arr[i];
        }
    }
    printf("%d",a);
    return 0;
}