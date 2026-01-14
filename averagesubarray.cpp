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
        int average=0;
        int max_average=0;
        int sum=0;
        for(int k=0;k<n;k++){
            for(int l=k;l<n;l++){
                for(int m=k;m<=l;m++){
                    sum+=a[m];
                    //cout<<a[m]<<' ';
                }
                average=sum/(l-k+1);
                if(average>max_average){
                    max_average=average;
                }
                average=0;
                
               //cout<<sum<<'\n';
               sum=0;
            }
        }
        cout<<max_average<<endl;
    }

    return 0;
}