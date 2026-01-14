#include<stdio.h>

int main()
{
    char c[10]="Bangladesh\0";
    char *s;
    s=c;

    printf("%s\n",s);
    s[0]='D';

    printf("%s\n",c);
    

    printf("%s",s);
    return 0;
}