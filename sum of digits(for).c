#include<stdio.h>
int main()
{
    int n,r,s;
    s=0;
    printf("enter n=");
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("sum of digits=%d",s);
    return 0;
}