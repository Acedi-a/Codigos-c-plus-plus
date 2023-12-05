#include <bits/stdc++.h>

#define FC(a) for(ll i=0; i<a;i++)
#define FN(i,a,b) for(int i= a; i<b ; i++)
#define FL(i,a,b,c) for(int i=a;i<b;i+c)
#define FINV(a) for(int i=a; i>=0;i--)
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

#define fio std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops", "omit-frame-pointer", "inline")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#pragma GCC option("arch=native", "no-zero-upper") // Enable AVX

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
typedef vector<pii> vpi;

// SUFFIX SUM //

int main()
{
    vs res;
    int n; cin>>n;
    while(n--){
        string cad; cin>>cad;
        int aux = -1;
        FINV(SZ(cad)){
            int num = cad[i] - '0';
            if(num>=5){
                int sig = cad[i-1] - '0';
                sig++;
                cad[i-1] = 48 + sig;
                if(sig>9){cad[i-1] = '9';}
                aux = i;
            }
        }

        if(aux==0){
            int lr = SZ(cad);
            string cadfin(lr+1,'0');
            cadfin[0] = '1';
            res.PB(cadfin);
        }
        else if(aux == -1){res.PB(cad);}
        else{
            fill(cad.begin()+aux,cad.end(),'0');
            res.PB(cad);
        }
    }

    for(auto it:res){
        cout<<it<<endl;
    }


    return 0;
}
