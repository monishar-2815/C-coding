#include<stdio.h>
int main()
{
    int i,p,c,n,x;
    p=0;
    c=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
        printf("Enter x");
        scanf("%d",&x);
        if(x%2!=0)
        {
           p=c;
           c=x;
        }
    }
    printf("previous odd number=%d\n",p);
    printf("current odd number =%d",c);
    return 0;
}
