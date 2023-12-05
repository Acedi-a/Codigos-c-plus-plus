#include <bits/stdc++.h>

#define FC(a) for(int i=0; i<a;i++)
#define FN(i,a,b) for(int i= a; i<=b ; i++)
#define FL(i,a,b,c) for(int i=a;i<b;i+c)
#define PB(x) push_back(x)
#define All(x) x.begin(),x.end()
#define SR(x) sort(All(x))
#define REV(x) reverse(All(x))
#define endl "\n"
#define ff first
#define ss second
#define FCH(a,b) for(auto a:b)
#define SZ(x) x.size()
#define MP(a,b) make_pair(a,b)
#define sol(x) cout<<x<<endl

#define fio std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

using namespace std;

typedef long long ll;
typedef long l;
typedef double db;
typedef float fl;

typedef pair<int, int> pii;
typedef map<string,int> m_si;
typedef map<int,string> m_is;

typedef vector<ll> vll;
typedef vector<l> vl;
typedef vector<int> vi;
typedef vector<fl> vf;
typedef vector<db> vd;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pii> vpii;

int main() {
    string cad; cin>>cad;
    FC(SZ(cad)){
        cout<<i<<endl;

            cout<<cad[i]<<endl;
            if(cad[i] == 'W'){
                cout<<cad<<endl;
                cad.erase(i,3);
                if(i!=0 && cad[i-1]!= ' ') cad.insert(i," ");
            }

    }
    cout<<cad<<endl;


}
