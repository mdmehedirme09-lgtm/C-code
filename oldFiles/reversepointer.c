#include<stdio.h>
#include<string.h>

void reverse(char *ch,int size)
{
    char *st=ch;
    char *ed=ch+size-1;
    // st=ch;
    // ed=*ch+size-1;
    int i;
    while(st<ed){
        char temp=*st;
        *st=*ed;
        *ed=temp;

        st++;
        ed--;
    }
}

int main()
{
    char ch[100];

    scanf(" %[^\n]",ch);
    
    int size=strlen(ch);
    reverse(ch,size);
   printf("%s",ch);
    return 0;
}