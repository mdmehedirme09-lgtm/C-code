#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    int i;
    cin>>t;

    while(t--){
        cin>>n;
        long long sum=(long long)n*(n+1)/2;
        long long sum_of_power=0;
        for( i=1;i<=n;i*=2){
            sum_of_power+=i;
        }
        long long ans=sum-sum_of_power;

        cout<<ans<<endl;
    }
    return 0;
}