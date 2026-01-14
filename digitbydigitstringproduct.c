#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    char b[10000];
    char p[20000]={0};

    printf("Enter the first number:\n");
    fgets(a,sizeof(a),stdin);
    printf("Enter the second number:\n");
    fgets(b,sizeof(b),stdin);
    
    a[strcspn(a,"\n")]=0;
    b[strcspn(b,"\n")]=0;

    int len1=strlen(a);
    int len2=strlen(b);

    for(int i=0;i<len1;i++){
        char temp=a[i];
        a[i]=a[len1-i-1];
        a[len1-i-1]=temp;
    }
    for(int i=0;i<len1;i++){
        char temp=b[i];
        b[i]=b[len1-i-1];
        b[len1-i-1]=temp;
    }

    for(int i=0;i<len1;i++){
        int s=a[i]-'\0';
        int carry=0;
        for(int j=0;j<len2;j++){
            int t=b[j]-'\0';
            int product=s*t+p[i+j]+carry;
            carry=product/10;
            p[i+j]+=product%10;
            while(carry!=0){
                p[i+j+1]=carry/10;
            }
        }
    }
    for(int i=len1+len2;i>0;i--){
        while(i>0 && p[i]==0){
            i--;
        }
        printf("%c",p[i]);
    }


    return 0;
}