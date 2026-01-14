#include<stdio.h>

int recc(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return recc(n-1)+recc(n-2);
    
}

void valuee(int n){
    for(int i=0;i<=n;i++)
    {
        printf("%d",recc(i));
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the term  you want to print:\n");
    scanf("%d",&n);

    printf("%d\n",recc(n-1));
    printf("The first %dth terms are:\n",n);
    valuee(n-1);
    return 0;
}