#include<stdio.h>

int summ(int a[],int size)
{
int i,sum=0;
for(i=0;i<size;i++){
    sum+=a[i];
}
return sum;

}


int main()
{
    int a[5]={5,6,7,8,9};
    int size=sizeof(a)/sizeof(a[0]);
    int sum=summ(a,size);
    printf("%d\n",size);
    printf("%d\n",sum);

    
    return 0;
}