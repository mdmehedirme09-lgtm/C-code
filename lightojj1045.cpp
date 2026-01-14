#include<bits/stdc++.h>
using namespace std;

int count_digits_in_base_factorial(int n,int b){
    if(n==0 || n==1){
        return 1;
    }
    double sum=0;
    int x=0;
    for(int i=2;i<=n;i++){
        sum+=log10(i);
    }
    x=floor(sum/log10(b))+1;

    return x;
}
int main() {
    int T;
    cin>>T;
    for(int case_num=1; case_num<=T; case_num++){
         int n,b;
         cin>>n;
         cin>>b;
         int digits=count_digits_in_base_factorial(n, b);
         cout<<digits<<endl;
     }

    return 0;
}