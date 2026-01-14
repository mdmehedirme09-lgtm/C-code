#include<bits/stdc++.h>
using namespace std;

int factt(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factt(n-1);
}

int main() {
    int n;cin>>n;
    int f=factt(n);
    cout<<f<<endl;
    return 0;
}