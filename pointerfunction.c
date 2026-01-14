#include<stdio.h>


void increment(int *p){
    *p=*p+1;
   // printf("The address of x is %d\n",&x);
}
int main()
{
    int a;
    a=10;
    increment(&a);
    printf("The value of a is %d\n",a);
    return 0;
}