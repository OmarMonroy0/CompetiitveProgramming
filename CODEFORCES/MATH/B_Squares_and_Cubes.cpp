//B. Squares and Cubes
// https://codeforces.com/contest/1619/problem/B

#include<bits/stdc++.h>
#define fi first
#define se second
#define endl '\n'
#define fast_  ios_base::sync_with_stdio(false); cin.tie (0); cout.tie (0);
#define all (x)   x.begin(),x.end()
#define PB (x) push_back (x)
using namespace std;
typedef long long  ll;
 
int solve (){
	ll n,i,j,k;
	set <ll> s;
	cin >> n;
	for (int i = 1; i * i <= n; i ++) s.insert(i*i);
	for (int i = 1; i*i*i <= n; i ++) s.insert(i*i*i);
	return s.size();
}
int main (){
	int T;
	cin >> T;
	while ( T --)
		cout << solve () << endl;
	return 0;	
}
