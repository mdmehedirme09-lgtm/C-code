#include<stdio.h>
#include<string.h>

/*void stringreverse(a[]){
    int length=strlen(a);
    char *str=a;
    char *end=a+length-1;
    while(str<end){
        char temp=str;
        str=end;
        end=temp;
        str++;
        end--;
    }
}
    */

int main()
{
    char a[100];
    printf("Enter the string\n");
    fgets(a,sizeof(a),stdin);
    //srtingreverse(a);
    int length=strlen(a);
    char *start=a;
    char *end=a+length-1;

    while(start<end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("%s",a);
    return 0;
}