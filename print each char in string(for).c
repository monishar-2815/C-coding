#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,l;
    i=0;
    printf("enter a string=");
    scanf("%s",s);
    l=strlen(s);
    for(;i<l;i++)
    {
        printf("%c\n",s[i]);
    }
    return 0;
}