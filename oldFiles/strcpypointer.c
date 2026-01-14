#include<stdio.h>

int main()
{
    char a[100];
    char b[100];
    printf("Enter the string:");
    fgets(a,sizeof(a),stdin);

    char *p=a;
    int i=0;
    while(*p!='\0'){
        b[i]=*p;
        p++;
        i++;
    }
    b[i]='\0';//important for string
    printf("The copy is %s\n",b);
    
    return 0;
}