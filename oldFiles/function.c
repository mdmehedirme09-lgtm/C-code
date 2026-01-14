#include<stdio.h>

int maxx(int a[4]){
    int t=a[0];
    
    for(int i=1;i<4;i++){
        if(t<a[i]){
            t=a[i];
        }
    }
    return t;
}

int main()
{
    int a[4]={6,3,90,23};
    printf("The maximum element is %d\n",maxx(a));
    return 0;
}