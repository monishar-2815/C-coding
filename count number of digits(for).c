#include<stdio.h>
int main()
{
    int n,c;
    c=0;
    printf("enter number =");
    scanf("%d",&n);
    for(;n>0;)
    {
     
        c++;
        n=n/10;
    }
    printf("number of digits=%d",c);
    return 0;
}