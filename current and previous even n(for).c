#include<stdio.h>
int main()
{
    int i,p,x,c,n;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter x=");
        scanf("%d",&x);
        if(x%2==0)
        {
            p=c;
            c=x;
        }
    }
    printf("previous even number=%d\n",p);
    printf("current even number=%d",c);
    return 0;
}
