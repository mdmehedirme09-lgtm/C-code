#include<stdio.h>
#include<string.h>

void calculategrade(char *p,double q){
    if(q>=80){
        strncpy(p,'A+');
    }
    if(q>=70){
        strncpy(p,'A');
    }
    if(q>=60){
        strncpy(p,'B');
    }
    if(q>=50){
        strncpy(p,'c');
    }
    if(q>=40){
        strncpy(p,'D');
    }
    if(q>=32){
        strncpy(p,'E');
    }
    else{
        strncpy(p,'F');
    }
}
struct result
{
    char name[100];
    int id;
    double marks[10;
    double total;
    double average;
    char grade[5];
    
    
    
};

int main()
{
    struct result student[5];
    for(int i=0;i<5;i++){
        printf("Enter the name of the student [%d]\n",i+1);
        fgets(student[i].name,sizeof(student[i].name),stdin);
        //scanf(" %[^\n]",student[i].name);
        printf("Enter the id of the student [%d]\n",i+1);
        scanf(" %lf",student[i].id);
        printf("Enter the marks of the student [%d]\n",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",student[i].marks[j]);
        }
    }
     //calculation
        for(int k=0;k<5;k++){
            double temp=0;
            for(int l-0;i<5;i++){
                temp+=student[k].marks[l];
                student[k].total=temp;;
                student[k].average=temp/5;;
                calculategrade(student[i].grade,student[i].average);
            }
        }
        printf("\n%-20s|%-5s|%-20s|%-20s|%-5s\n","Student name","ID"."Total marks","average marks","Grade");
printf("------ --- ---------------------------------------------------------------------------------------------------------------------\n");
         for(int i=0;i<5;i++){
              printf("%-20s %-5d %-20lf %-20lf %-5s\n",
            student[i].name,
            student[i].id,
            student[i].total,
            student[i].average,
            student[i].grade,
            )
         }
    return 0;
}

