//B. Who's Opposite?
// https://codeforces.com/contest/1560/problem/B


#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
#define FOR(i,n) for(unsigned long long i = 0; i < (unsigned long long)n; i ++)
#define endl "\n"
#define endls "\n\n\n"
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<ull> vecu;
 
ll solve(ll a,ll b,ll c){
    ll rem, x,y,i,j,el;
    rem = a - b;
    if( rem < 0) rem *=-1;
    if(rem == 0) return -1;
    rem *= 2;
    if( a > rem ||b > rem || c > rem) return -1;
    x = rem / 2 +1; //half 
    if(c >= x) return c -x + 1;
    else {
        i = c -1;
        return x+i; 
    }
}
 
int main() {
    ll t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;
        cout<<solve(n,m,x)<<"\n";
    }
    return 0;
}
