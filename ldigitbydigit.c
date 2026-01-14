#include<stdio.h>
#define max 100
int main()
{
    int a[max];
    int i,j;
    int x,y;
    printf("Enter the digit number:\n");
    scanf("%d",&x);
    printf("Enter the first number:\n");
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int b[max];
    printf("Enter the digit number:\n");
    scanf("%d",&y);
    printf("Enter the first number:\n");
    for(int i=0;i<y;i++){
        scanf("%d",&b[i]);
    }
    int p[x+y];
    int carry=0;

    for( i=0;i<x;i++){
        for( j=0;j<y;j++){
            p[i+j]+=(a[i]*b[j]+carry)%10;
            carry=p[i+j]/10;
        }
        while(carry>0){
            p[i+j+1]=carry/10;
        }
    }
    for(int i=0;i<x+y;i++){
        printf("%d",&p[i]);
    }
    return 0;
}