//A. Polycarp and Coins
//https://codeforces.com/contest/1551/problem/A

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
 
void solve(){
    ull n,m,a,b,c,k;
    cin>>n;
    m = n / 3;
    a = b = m;
    k = a + b*2;
    c = n - k;
    if(c == 1) a++;
    else if( c == 2) b++;
    cout<<a<<" "<<b<<endl;
    
}
 
int main() { fast;
    ull t,n;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
