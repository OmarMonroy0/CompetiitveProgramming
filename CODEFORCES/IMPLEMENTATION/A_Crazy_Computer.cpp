//A. Crazy Computer
// https://codeforces.com/contest/716/problem/A

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
 
ll solve(){
   ll i,j,n,m;
   cin>>n>>m;
   vector<ll> v(n,0);
   for(i = 0; i< n; i ++)
        cin>>v[i];
    ll cont = 1;
    for(i = 1;i < n;i ++){
        if(v[i] - v[i-1] > m){ cont = 1; continue; }
        cont++;
    }
    return cont;
}
int main() {
	cout<<solve();
	return 0;
}
