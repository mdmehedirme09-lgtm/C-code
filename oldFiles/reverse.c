#include<stdio.h>

void reverse(char *c,int size)
{
    int i;
    for(i=0;i<size/2;i++){
        int temp=c[i];
        c[i]=c[size-i-1];
        c[size-i-1]=temp;
    }
}

int main()
{
    char c[100]="kffk76ua";

    int size=strlen(c);
    reverse(c,size);
   printf("%s",c);
    return 0;
}