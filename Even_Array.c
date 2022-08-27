#include<stdio.h>
int main()
{
    int i,n,co=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            co++;
        }
        else
        {
            printf("False");
            break;
        }
    }
    if(co==n)
    {
        printf("True");
    }
}