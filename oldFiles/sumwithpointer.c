#include<stdio.h>
int main()

{
    int a[5]={2,3,4,5,6};
    int *p=a;
    int sum=0;
    for(;p<a+5;p++){
     sum=sum+*p;
    }
     printf("The sum is %d\n",sum);
    return 0;
}