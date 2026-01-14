#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    fprintf(stdout,"Enter the string:\n");
    fgets(str,sizeof(str),stdin);

    char word[50];
    char large[50];
    int i=0,j=0;

    for(i=0;i<strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            word[j]=str[i];
            j++;
        }
        else{
            word[j]='\0';
            if(strlen(word)>strlen(large)){
                strcpy(large,word);
            }
            j=0;
        }
    }
    fprintf(stdout,"The largest word in the string:");
    fprintf(stdout,"\n%s\n",large);
    return 0;
}
