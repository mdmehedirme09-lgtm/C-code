#include <stdio.h>
#include <string.h>

// Decimal to Binary



int main() {
    
    FILE *p1,*p2;
  //  int n;
    p1=fopen("Input","w");
    if(p1==NULL){
        printf("Error!\n");
    }
    fprintf(stdout,"Enter the element\n");
   for(int i=0;i<=100;i++){
    if(i==-1){
        break;
    } 
    fscanf(stdin,"%d",&i);
    fprintf(p1,"%d",i);
}
fclose(p1);
p1=fopen("Input","r");
p2=fopen("Output","w");

int n;
int count=0;
    while(fscanf(p1,"%d",&n)==1){
       count++;
        if((count-1)%3==0){
            fprintf(p2,"%d",n);
        }
    }
    fclose(p2);
    
    return 0;
}