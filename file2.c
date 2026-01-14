#include<stdio.h>

int main()
{
    FILE *f1;
    char c;
    f1=fopen("INPUT","w");

    printf("\n Data Input\n");

    while((c=getchar())!=EOF){
        putc(c,f1);
    }
    fclose(f1);
    printf("\n %c",c);
    return 0;
}
