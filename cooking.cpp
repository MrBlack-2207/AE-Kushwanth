#include <bits/stdc++.h>
const int MOD = 1e5 + 7;
const int MAX_N = 1e5 + 7;
#define KakuseiNoTabi() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define vll vector<ll>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vvll vector<vll>
#define vii vector<int>
#define vvii vector<vii>
#define vecs vector<string>
#define vpii vector<pair<int,int>>
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vpll vector<pair<ll,ll>>
#define vbl vector<bool>
#define vvbl vector<vector<bool>>
#define usetii unordered_set<int>
#define usetll unordered_set<ll>
#define setii set<int>
#define setll set<ll>
#define setpll set<pll>
#define setpii set<pii>
#define usetpll unordered_set<pll>
#define usetpii unordered_set<pii>
#define forl(i,a,b) for(ll i=a; i<b; i++)
#define fori(i,a,b) for(int i=a; i<b; i++)
#define rforl(i,a,b) for(ll i=a; i>b; i--)
#define rfori(i,a,b) for(int i=a; i>b; i--)
#define sz(a) a.size()
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define rev(v) reverse((v).begin(), (v).end())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define suml(v) accumulate(all(v),0LL)
#define sumi(v) accumulate(all(v),0)
#define lb(v,target) lower_bound(all(v), target)
#define rlb(v,target) lower_bound(rall(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target)
#define rub(v,target) upper_bound(rall(v), target) // Equivalent to finding the largest element smaller than or equal to target
#define ubset(s,target) s.upper_bound(target)
#define JOIN_STRINGS(vec) std::accumulate((vec).begin(), (vec).end(), std::string(""))
#define vin(v) for(int i=0; i<(int)v.size(); i++) cin>>v[i] // Only for 0-based indexing inputs
#define vout(v) for(int i=0; i<(int)v.size(); i++) cout<<v[i]<<' ' // Only for 0-based indexing outputs
#define debug(x) cerr << #x << " = " << x << endl;
#define add(a,b) a=(a+(b))%MOD
#define minRotate(v) rotate(begin(v), ranges::min_element(v), end(v))
#define maxRotate(v) rotate(begin(v), ranges::max_element(v), end(v))
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define INF 1e9+100
using namespace std;
#define GCD(a, b) __gcd(a, b)
bool iseven(ll n) {if ((n & 1) == 0) return true; return false;}
void solve() {
    
}

int main() {
    KakuseiNoTabi();
    int t =1;
    cin >> t; 
    while (t--) {
        solve();
    }
}
