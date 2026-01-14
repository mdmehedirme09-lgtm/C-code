#include<bits/stdc++.h>

using namespace std;

int checkk(int n){
    int flag;
    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=3;i<sqrt(n);i++){
       if(n%i==0){
        flag=0;
        return 0;
       } else{
        flag=1;
       }
    }
    if(flag==1){
       return 1;
    }
    return 0;
}

int primee(int n){
    int ans=0;
   for(int i=1;i<n;i++){
       if(n%i==0){
        if(checkk(i)){
            ans++;
        }
       }
   }
   if(ans==2){
    return 1;
   }
   //return 0;
    
}
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            if(primee(i)){
            count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}