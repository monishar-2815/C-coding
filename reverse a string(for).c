#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l;
    printf("enter a string");
    scanf("%s",s);
    l=strlen(s);
    printf("reversed string=");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}