#include <bits/stdc++.h>

#define FC(a) for(int i=0; i<a;i++)
#define FN(i,a,b) for(int i= a; i<b ; i++)
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

int main()
{
    int n; cin>>n;
    vector<vector<char>> spiral (n,vc(n,'#'));
    string cad; cin>>cad;

    int cx = n/2;
    int cy = n/2;
    int dir = 0;
    int maxi = 1;
    int dirwal = 0;


    FCH(letra, cad){
        spiral[cx][cy] = letra;

        if (dir == 0) {
            cx--;
        } else if (dir == 1) {
            cy++;
        } else if (dir == 2) {
            cx++;
        } else if (dir == 3) {
            cy--;
        }
        dirwal++;

        if (dirwal == maxi) {
            dir = (dir + 1) % 4;
            if (dir == 0 || dir == 2) {
                maxi++;
            }
            dirwal = 0;
        }
    }

    FN(i,0,n){
        FN(j,0,n){
            if(spiral[i][j] != '#')cout<<spiral[i][j];
        }
    }
    cout<<endl;




}
