#include<stdio.h>

int factt(int n){
    if(n==1){
        return 1;
    }
    return n*factt(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            int x=factt(i)/(factt(j)/factt(j-i));
            printf("%d",x);
        }
    }
    return 0;
}