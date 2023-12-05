#include <iostream>

using namespace std;

int main()
{
    int t,n,res=0;
    cin>>t;
    if (t>=1 && t<=100){
        for (int i=1;i<=t;i++){
        cin>>n;
        res+=n;
    }
    if (res==180)cout<<"YES";
    else cout<<"NO";

    }
}
