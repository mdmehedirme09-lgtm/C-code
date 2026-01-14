#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int s=0;
    int count=0;
    if(n/10==0){
        cout<<n;
    }
    else{
    while(n>=10){
        while(n!=0){
        s+=n%10;
        n=n/10;
    }
    n=s;
    count++;
    }
}
     cout<<count;
    
    return 0;
}