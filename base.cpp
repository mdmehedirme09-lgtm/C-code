#include<bits/stdc++.h>
using namespace std;

int basse(int n,int b){
    int i=0;
    int a=0;
    while(n>0){
        int a=n%b;
        i++;
        n=n/b;
    }
    return i;
}

int main() {
    int n;
    cin>>n;
    int b;
    cin>>b;
    cout<<basse(n,b);
    return 0;
}