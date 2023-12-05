#include <bits/stdc++.h>
#include <vector>

using namespace std;
void solv()
{
    vector<int> matriz;
    int n,n1,num,c=0,c1=1,c2=0,sum1=0,sum2=0,a=0,a1=0,a2=0; cin>>n;
    n1=n*n;
    while(n1--){
        cin>>num;
        matriz.push_back(num);
        if(c1==1){
            sum1+=matriz[c2];
            c1=0;
        }
        if(c==n+1){
            sum1+=matriz[c2];
            c=0;
        }

        if(a2!=n+1){
           if(c2==n){
                sum2+=matriz[c2];
                a=1;
                a1=0;
            }
            if(a1==n-1 && a == 1){
                sum2+=matriz[c2];
                a1=0;
            }
        c++;
        c2++;
        a1++;
        }
        a2++;

    }
    cout<<sum1<<endl;
    cout<<sum2;
}

int main()
{
    solv();
    return 0;
}
