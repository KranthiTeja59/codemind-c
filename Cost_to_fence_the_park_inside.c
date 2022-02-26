#include<stdio.h>
int main()
{
    int L,B,W,C,l1,b1,area;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    l1=L-2*W;
    b1=B-2*W;
    area=((L*B)-(l1*b1))*C;
    if(l1<=0 ||b1<=0)
    printf("Impossible");
    else
    printf("%d",area);
    return 0;
}