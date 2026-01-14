#include<bits/stdc++.h>
using namespace std;

int factt(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factt(n-1);
}
int basse(int n,int b){
    int i=0;
    int a=0;
    int count=0;
    while(n>0){
        int a=n%b;
        n=n/b;
        i++;
        count++;
    }
    return count;
}

int main() {
    int T;
    int n,b;
    cin>>T;
    int digits=0;
    for(int case_num=1; case_num<=T; case_num++){
         cin>>n;
         cin>>b;
    int f=factt(n);
     digits=basse(f,b);
    cout<<digits<<endl;
     
    }

    return 0;
}