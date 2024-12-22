                                             /*In the name of Almighty Allah*/
#include<bits/stdc++.h>
using namespace std;

#define                 endl                        '\n'
#define                 C(a)                        cout<<(a)<<endl;
#define                 ll                          long long
#define                 Yes                         cout<<"Yes"<<endl;
#define                 No                          cout<<"No"<<endl;
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 rf(i,pp,n)                  for(ll (i) = pp; i >=n; i--)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 vrsort(n)                   sort(n.begin(),n.end(),greater <> ()); 
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 unique(n)                   (n).erase(unique((n).begin(),(n).end()),(n).end());
const long long inf = 90000000000000000;
ll test ,COUNT = 0 ; 
// // modulo // PBDS // graph_index //Factors // rotator // issort? // sum // count //SUBSTR //CMP


ll gcd(ll a, ll b)                      { if (b == 0) return a;       return gcd(b, a%b );  }
ll lcm(ll a, ll b)                      {  return ((a*b) / gcd(a, b)) ; }
ll power(ll base, ll power,ll mod)      {ll res=1;while(power){if(power%2==1){res=(res*base)%mod;power-=1;}else{base=(base*base)%mod;power/=2;}}return res;} ////0(log2(p)) 
void normal(ll &a)                      { a %= MOD; (a < 0) && (a += MOD); }
ll modAdd(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
ll modSub(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }//ll value = 0 ; value = ( ar[idx] + sum ) % d; if ( value < 0 ) value += d;
ll modMul(ll a, ll b, ll mod)           { a %= mod, b %= mod; normal(a), normal(b); return (a*b)%mod; }
ll modInverse(ll b , ll mod)            {return  (power(b,mod-2,mod)) % mod ;}
ll moddiv(ll a , ll b , ll mod)         {return modMul(a,modInverse( b , mod),mod);}// ll ans = ((a % M )* power(b,M-2,M))% M ;// return ans ;



#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define                 pair_o_set                  tree<pair<ll,ll>, null_type,greater_equal<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> //  pair_o_set xxx ;
template <typename DT, typename FUNC> using o_set = tree<DT, null_type, FUNC, rb_tree_tag, tree_order_statistics_node_update>; // o_set<ll,less_equal<ll>> xx;
// xx.order_of_key(-5)
// auto it = xx.upper_bound({12 , 15});// xx.erase(it);
// *xx.find_by_order(1)


int dx[8] = {  0,  0, +1, -1, -1, +1, -1, +1 };
int dy[8] = { +1, -1,  0,  0, -1, +1, +1, -1 };
    auto check=[&](ll x)->set<ll>{
        set<ll>st;
        for(ll j = 1 ; j <=sqrt(x) ; j++ )
        {
            if(x%j==0)
            {
                ll div = x/j;
                st.insert(j);
                if(x%div==0) st.insert(div);
            }
        }
        return st ; 
    };
rotate(v.begin(),v.begin()+1,v.end());// 1st 1 ghor last e ni jabe jdi +1 di

is_sorted(v.begin(),v.end());

accumulate(v.begin(),v.end(),0LL);


count(s.begin(), s.end(), '0') 

string str = s.substr(idx,indextheke_kototuku_nibo_idx+(jtw_tuku_nibo));


auto cmp = [](pair<ll,ll>&a,pair<ll,ll> &b){
        if(a.first==b.first) return a.second<b.second ; 
        return a.first>b.first;
    }; 
map<ll,ll>mp;
    multiset<ll>ms;
    auto cmp = [&mp,&ms](int x , int increase){
            if(ms.count(x)) ms.erase(ms.find(x));
            mp[x]+=increase ; 
            ms.erase(mp[x]);
        };