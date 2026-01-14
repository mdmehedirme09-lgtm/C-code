#include<stdio.h>

int main()
{
    FILE *file;

    file=fopen("Name.txt","w");

    if(file=NULL){
        printf("The file is closed\n");
    }
    else{
        printf("The file is opened\n");
        fclose(file);
    }
    return 0;
}