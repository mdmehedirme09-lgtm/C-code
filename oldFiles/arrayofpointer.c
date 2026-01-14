#include<stdio.h>


int main()
{
    int a[5]={2,3,4,5,6};
    int *p;
  

    p=a;
    printf("%d\n",&a);
    printf("%d\n"*a);
    printf("%d\n",&(a+1));
    printf("%d\n"*a+1);
    return 0;
}
