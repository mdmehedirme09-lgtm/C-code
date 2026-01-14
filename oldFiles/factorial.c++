#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main()
{
    cpp_int  p=1;
    int n;

    cout<<"Enter your number:\n";
    cin>>n;

    for(int i=1;i<=n;i++){
         p=p*i;
    }
    cout<<"The factorial of" << n << "is" <<p<<endl;
    return 0;
}