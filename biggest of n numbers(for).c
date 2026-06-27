#include<stdio.h>
int main()
{
    int n,x,i,big;
    printf("enter n=");
    scanf("%d",&n);
    printf("enter number=");
    scanf("%d",&big);
    for(i=2;i<=n;i++)
    {
        printf("enter number=");
        scanf("%d",&x);
        if(x>big)
        {
            big=x;
        }
    }
    printf("biggest number =%d",big);
    return 0;
}