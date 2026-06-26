#include<stdio.h>
int main()
{
    int n,r,p;
    p=1;
    printf("enter n=");
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("product of digits=%d",p);
    return 0;
}