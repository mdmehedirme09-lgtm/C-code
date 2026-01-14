#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    long long count=0;
    long long sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j*=2){
            for(int k=1;k<=n;k*=2){
                sum+=i+j+k;
                count++;
            }
        }
    }
    cout<<sum<<endl;
    cout<<count<<endl;
    cout<<count/100000000;
    return 0;
}