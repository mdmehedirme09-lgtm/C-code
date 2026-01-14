#include<bits/stdc++.h>

using namespace std;
int main()
{
    int A,B, C;
    cin>>A>>B>>C;
    int a=A*A;
    int b=B*B;
    int c=C*C;
    if(a+b<c){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}