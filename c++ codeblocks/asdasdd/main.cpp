#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a; cin>>a;
    int k; cin>>k;
    cout<<a<<endl;
    string b = a;

    cout<<b<<endl;
    bool n = false;
    int i = 0;
    while(b>=a){

            int ix = i;
            if(ix+k >= a.length()) ix = (ix+k) % a.length();
            else ix+=k;
            swap(b[i],b[ix]);
            cout<<i<<" "<<ix<<" "<<b<<endl;
            if(b<a){
             n = true;
             break;
            }
            if(i<a.length()) i++;
            else i=0;

    }

    cout<<b<<endl;
    return 0;
}
