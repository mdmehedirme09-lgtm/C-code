#include<bits/stdc++.h>

using namespace std;
int main()
{
     int t;
    cin>>t;
     int n[t];
     int s=0;
     int i,j,k;
    for(int i=0;i<t;i++){
        cin>>n[i];
    }
    for(int i=0;i<t;i++){
        for(int j=1;j<=n[i];j++){
          s+=j;
            for(int k=0;k<sqrt(n[i]);k++)
            {
              if(pow(2,k)==j){
                s=s-2*j;
                break;
               }
            }    
        }
        cout<<s*(-1)<<'\n';
        s=0;
    }


    return 0 ;
}

