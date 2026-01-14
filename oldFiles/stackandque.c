#include<stdio.h>
#define max 5

int main()
{
    int stack[max];
    int value;
    int choice;
    int top=-1;

    while(1){
        printf("\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Print the stack\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n");
        printf("\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            if(top==max-1){
                printf("Overflow\n");
            }
            else{
                printf("Enter your pushing element \n");
                scanf("%d",&value);
                top++;
                stack[top]=value;
            }
            break;
            case 2:
            if(top==-1){
                printf("Underflow\n");
            }
            else{
                top--;
            }
            break;
            case 3:
            for(int i=0;i<=top;i++){
                printf("%d\n",stack[i]);
            }
            break;
            case 4:
            
            return 0;

        }
    }
    return 0;
}