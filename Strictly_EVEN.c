#include<stdio.h>
int main()
{
    int n,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int is_e=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2!=0)
        {
            is_e=0;
            break;
        }
    }
    if(is_e==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}