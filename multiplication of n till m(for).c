#include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter n=");
    scanf("%d",&n);
    printf("enter m=");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
    return 0;
}