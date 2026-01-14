#include<bits/stdc++.h>

using namespace std;

int summ(int n){
    int sum=0;
    while(n>0){
        int k=n%10;
        sum+=k;
        n=n/10;
    }
    return sum;
}
int main()
{
    char n[100005];
    cin>>n;
    int length=strlen(n);
    if(length==1){
        cout<<0<<endl;
        return 0;
    }
    int sumofdigits=0;
    int ans=0;
    int sum=0;
    for(int i=0;i<length;i++){
         sum+=n[i]-'0';
    }
    ans++;
    int k=sum;
    while(k>9){
         sum=0;
        sum+=summ(k); 
        k=sum;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}