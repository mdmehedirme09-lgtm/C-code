#include<stdio.h>

int main()
{
    int a[5]={3,4,5,6,7};
    int *str=a;
    int *end=a+4;
    for(;str<end;str++,end--){
        int temp=*end;
        *end=*str;
        *str=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}