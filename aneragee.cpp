#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
       int x= *max_element(a,a+n);
        cout<<x<<endl;
    }

    return 0;
}