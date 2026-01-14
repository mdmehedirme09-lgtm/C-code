#include<stdio.h>
#include<string.h>

/*void reverse(char *ch,int size)
{
    char *st=ch;
    char *ed=ch+size-1;
    // st=ch;
    // ed=*ch+size-1;
    int i;
    while(st<ed){
        char temp=*st;
        *st=*ed;
        *ed=temp;

        st++;
        ed--;
    }
}
    */

int main()
{
    char ch[100];

    scanf(" %[^\n]",ch);
    
    int size=strlen(ch);

    char *find=ch;
    char vowel=0;
    char consonant=0;

    while(*find!='\0'){
        if(*find=='a'||*find=='A'||*find=='e'||
        *find=='i'||*find=='I'||*find=='o'||
        *find=='O'||*find=='u'||*find=='U'){
            vowel++;
        }
        else{
            consonant++;
        }
        find++;

    }

   printf("%d\n",vowel);
   printf("%d\n",consonant);
    return 0;
}