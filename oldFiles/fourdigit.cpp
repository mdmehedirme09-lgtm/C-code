#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A,B,C;
    int flag;
    //cout<<"Enter the number between 1 to 1000"<<'\n';
    cin>>A>>B>>C;
    
    for(int i=0;i<=C;i++){
        for(int j=0;j<=C;j++){
         if(A*i+B*j==C){
            cout<<"Yes"<<'\n';
            flag=0;
            return 0;
        }
        else if(A*i+B*j>C){
            flag=1;
            break;
        }
    }
} 
if(flag==1){
    cout<<"No";
}
    return 0;
}