#include <bits/stdc++.h>
using namespace std;

int minima(int n){
    int p=n%10;
    n=n/10;
    int q=n%10;
    n=n/10;
    int r=n%10;
    n=n/10;
    int s=n%10;
    n=n/10;
    if((p!=q)&&(p!=r)&&(p!=s)&&(q!=r)&&(q!=s)&&(r!=s)){
        return true;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    for(int i=n+1;i<=9000;i++){
        if(minima(i)){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}