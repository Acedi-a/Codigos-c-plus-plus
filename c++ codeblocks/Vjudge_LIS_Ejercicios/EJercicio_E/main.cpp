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
    fio;
    int n;
    cin>>n;
    vi nums;
    vi nums2;
    FC(n){
        int a; cin>>a;
        nums.PB(a);
    }
    FC(n){
        int a; cin>>a;
        nums2.PB(a);
    }


    vi dp (n,1);
    vi dp2 (n,1);

    FN(i,1,n){
        FN(j,0,i){
            if(nums[j]<nums[i]) dp[i] = max(dp[i],dp[j]+1);
            if(nums2[j]<nums2[i]) dp2[i] = max(dp2[i],dp2[j]+1);
        }
    }

    int n1 = *max_element(All(dp));
    int n2 = *max_element(All(dp2));
    cout<<n1<<endl<<n2<<endl;

    int m = min(n1,n2);
    if(n % 2 == 0) cout<<m-1<<endl;
    else cout<<m<<endl;


    return 0;
}
