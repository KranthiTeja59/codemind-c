#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N],i,t=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            if(i%2==0)
            {
                t++;
            }
            else
            {
                printf("False");
                t=0;
                break;
            }
        }
    }
    if(t>0)
    {
        printf("True");
    }
    return 0;
}