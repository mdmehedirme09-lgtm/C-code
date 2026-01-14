#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,s;
    int count=0;
    cin>>k>>s;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            for(int l=0;l<=k;l++){
               if((i+j+l<k) && (i+j+k)==s){
                count++;
               }
            }
        }
    }
    cout<<count;
    return 0;
}