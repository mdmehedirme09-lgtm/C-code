#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[1000];
    cin.getline(a,1000);
    int length=strlen(a);
    char word[100]="\0";
    char large[100]="\0";
    int j=0;
    int count=0;
    for(int i=0;i<length;i++){
        if(a[i]!=' ' && a[i]!='\0'){
           word[j]=a[i];
           j++;
          // i++;
        }
        else{
            word[j]='\0';
            if(strlen(word)>strlen(large)){
                strcpy(large,word);
            }
            j=0;
        }
        
    }
   
           cout<<large<<endl;
    return 0;
}