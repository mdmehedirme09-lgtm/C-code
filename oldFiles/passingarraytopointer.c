#include<stdio.h>

void Double(int *a,int size)
{
    int i;
    for(i=0;i<size;i++){
        a[i]=2*a[i];
    }
}

int main()
{
    int a[5]={2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    Double(a,size);
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}