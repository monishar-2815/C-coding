#include<stdio.h>
int main()
{
    int i,fact,s,n;
    fact=1;
    s=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        if(i%2!=0)
        {
            s=s+fact;
        }
    }
    printf("%d",s);
    return 0;
}
