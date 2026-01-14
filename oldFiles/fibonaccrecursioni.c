#include<stdio.h>

int recc(int n){

    if(n==1 ){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return recc(n-1)+recc(n-2);
    
}

int main()
{
    int n;
    printf("Enter the term  you want to print:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("%d\n",recc(i));
    }
    return 0;
}