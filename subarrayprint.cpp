#include<bits/stdc++.h>
using namespace std;

//print all sub array

int main() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int l=0;l<n;l++){
        for(int k=l;k<n;k++){
            for(int i=l;i<=k;i++){
                cout<<a[i]<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}