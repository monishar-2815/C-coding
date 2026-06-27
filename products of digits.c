#include<stdio.h>
int main()
{
    int n,p,r;
    p=1;
    printf("enter n=");
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    
    printf("products of digits=%d",p);
    return 0;
}