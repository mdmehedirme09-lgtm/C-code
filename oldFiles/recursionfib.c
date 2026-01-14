#include<stdio.h>

 int fibb(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibb(n-1)+fibb(n-2);
}
int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    printf("The nth term of the fibonacci series-\n");
   for(int i=0;i<n;i++){
    printf("%d",fibb(i));
   }


    return 0;
}