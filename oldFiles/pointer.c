#include<stdio.h>

int main()
{
    int x=5;
    int *p;
    p=&x;
    printf("%d\n",x);
    printf("%u\n",&x);
    printf("%d\n",&x);
    printf("%u\n",x);
    printf("%u\n",p);
    printf("%d\n",*p);
    printf("\n");

    *p=6;
    printf("%d\n",x);
    printf("%u\n",p);
    printf("%d\n",*p);
    printf("\n");

    int **q=&p;
    //**q=&p;

    printf("%d\n",*(*q));
    printf("%u\n",*q);
    printf("%d\n",*q);
    printf("%u\n",q);
    printf("\n");

    **q=8;
    printf("%d\n",*(*q));
    printf("%d\n",*q);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",q);
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("\n");

    **q=*p+2;
    printf("%d\n",x);
    printf("%d\n",**q);
    printf("%d\n",*p);
    printf("\n");

    int r=**q+*p+x;
    printf("%d\n",r);


    return 0;
}