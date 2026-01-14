#include<stdio.h>

int main()
{
    char a[100];
    int length=0;
    int i;
    printf("Enter the string\n");
    fgets(a,sizeof(a),stdin);

    while(a[i]!=0){
        length++;
        i++;
    }
    printf("The length of the srting is %d\n",length);
    return 0;
}