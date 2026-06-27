#include<stdio.h>
int main()
{
    int n,x,i,p,neg,z;
    p=0;
    neg=0;
    z=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter number=");
        scanf("%d",&x);
        if(x>0)
        {
            p++;
        }
        else if (x<0)
        {
            neg++;
        }
        else
        {
            z++;
        }
        
    }
    printf("positive=%d\n",p);
    printf("negative=%d\n",neg);
    printf("zero,=%d",z);
    return 0;
}