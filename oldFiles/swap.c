#include<stdio.h>

void swap(int *a,int *b,int *c)
{
  int temp=*a;
  *a=*b;
  *b=*c;
  *c=temp;

  printf("%d %d %d\n",*a,*b,*c);
}
int main()
{
    int a,b,c;
    a=5;
    b=19;
    c=10;
    swap(&a,&b,&c);
    return 0;
}