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
#define FF(x,y) for(auto x=y.begin();x!=y.end();x++)
#define in(x,y) x y; cin>>y

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
typedef vector<pii> vpi;

typedef unordered_map<int,int> u_ii;
typedef unordered_map<string,int> u_si;
typedef unordered_map<char,int> u_ci;

typedef unordered_set<int> us_i;

int main()
{
    long long n; cin>>n;
    long long c = 0;
    while(n--){
        string cad; cin>>cad;
        long long num = 0;
        FC(SZ(cad)){
            string c1 = cad.substr(0,i);
            string c2 = cad.substr(i+1);
            string cf = c1+c2;
            long long num = stoi(cf);
            if(num%3==0) {c++; break;}
        }
    }
    cout<<c<<endl;


}
