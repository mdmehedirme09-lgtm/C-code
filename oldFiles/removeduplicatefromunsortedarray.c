#include<stdio.h>
#define max 100

void bubblesort(int *a,int n){
    int i,j;
    for( i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
/*void removeduplicate(int *a,n){
    int *p;
}
    */

int main()
{
    int a[max];
    int n;
    int i;
    printf("Enter the number of element you want to enter:\n");
    scanf("%d",&n);
    if(n>max){
        printf("Please enter a number between 1 to 100:\n");
        return 1;
    }
    printf("Enter your array element:\n");
    for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
   // removeduplicate(a,n);
   int *p=a;
   int j=0;
   int b[max];
   b[j++]=*p;
   p++;
   while(p<a+n){
    if(*p!=b[j-1]){
        b[j]=*p;
        j++;
    }
    p++;
   }
   printf("New array\n");
   for(int k=0;k<j;k++){
    printf("%d\n",b[k]);
   }
    return 0;
} 