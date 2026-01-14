#include<stdio.h>
#define max 100

int main()
{
    int a[max];
    int n;
    printf("Enter the element you want to input:\n");
    scanf("%d",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int size=sizeof(a)/sizeof(a[0]);
    printf("The size of the array is-%d",size);

    return 0;
}
