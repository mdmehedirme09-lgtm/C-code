#include<stdio.h>

void summ(int *a,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    printf("Sum==%d\n",sum);
}

int main()
{
    int a[10]={23,4,5,6,6,7,8,8};
    int size=sizeof(a)/sizeof(a[0]);
    summ(a,size);
   return 0;
}