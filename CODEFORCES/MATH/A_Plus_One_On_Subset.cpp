//A. Plus One on the Subset 
// https://codeforces.com/contest/1624/problem/A 

#include<bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
#define lh(x) x.length()
#define fi first 
#define se second
#define PB(x) push_back(x)
#define PO(x)  x.pop_back()
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
typedef long long ll;
auto solve () -> ll{
	ll M,Mi, i, j, k,x,y,res,n,m;
	cin >> n;
	vector<ll> v(n,0);
	cin >> k;
	M = Mi = k;
	for (int i = 1; i < n; i ++){
		cin >> v[i];
		Mi = min (Mi,v[i]);
		M = max(M,v[i]);
	}
	return (M-Mi);
}
 
auto main() -> int{
	fast;
	int t;	
	cin >> t;
	while (t--)
		cout << solve () << endl;	
	return 0;
}
