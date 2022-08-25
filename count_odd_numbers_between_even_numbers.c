#include<stdio.h>
int main()
{
    int i,n,c=0;
    int arr[n];
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
        if(arr[i]%2==0 && arr[i+2]%2==0)
        {
            if(arr[i+1]%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}