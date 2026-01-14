#include<stdio.h>

int main()
{
    int a[10]={1,1,1,2,2,3,3,4,5,5};
    int b[10];
    
    int *p=a;
    int n=10;
    int *end=a+n;
    int i=0;
    b[i++]=*p;
    p++;
    while(p<end){
        if(*p!=b[i-1]){
            b[i]=*p;
            i++;
        }
        p++;
        
    }
   for(int j=0;j<i;j++){
    printf("%d\n",b[j]);
   }

    return 0;
}