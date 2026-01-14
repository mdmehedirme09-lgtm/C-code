#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int i,k,l;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    for( i=0;i<n;i++){
        for(k=i;k<n;k++){
            for(l=i;l<=k;l++){
                cout<<a[l]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}