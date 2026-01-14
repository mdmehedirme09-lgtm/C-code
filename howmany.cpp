#include<bits/stdc++.h>

using namespace std;
int main()
{
    int S,T;
    int count=0;
    int i,j,k;
    cin>>S>>T;
    for(int i=0;i<=S;i++){
        for(int j=0;j<=S;j++){
            for(k=0;k<=S;k++){
                if((i+j+k<=S) && i*j*k<=T){
                   count++;
                }
            }
        }
    }
    cout<<count<<'\n';
    return 0;
}
