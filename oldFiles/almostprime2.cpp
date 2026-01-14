#include <bits/stdc++.h>
using namespace std;

int isprime(int n){
    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int almostprime(int n){
    int total=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
           if(isprime(i)){
           // cout<<i<<endl;
            total++;
           }
        }
    }
    if(total==2){
        return 1;
    }
    return 0;
}


int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(almostprime(i)){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}