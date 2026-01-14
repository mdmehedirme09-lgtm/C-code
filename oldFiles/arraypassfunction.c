#include<stdio.h>

void passarray(int *array,int x){
    for(int i=0;i<x;i++){
        printf("%d\n",array[i]);
    }
}

int main()
{
    int a[]={1,2,3,34,5,5,6,6,7,};
    int size=sizeof(a)/sizeof(a[0]);

    passarray(a,size);
    return 0;
}