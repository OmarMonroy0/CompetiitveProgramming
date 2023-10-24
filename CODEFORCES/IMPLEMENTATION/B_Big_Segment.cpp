//B. Big Segment 
// https://codeforces.com/contest/242/problem/B

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair <ll, ll> P;
 
auto solve () -> ll {
	ll n,m,i,j,k,p,x,y;
	cin >> n;
	vector <P> v (n,{0,0});
	cin >> k >> p;
	x = k;
	y = p;
	v[0] = {k,p};
	for (i = 1; i < n; i ++){
		cin >> k >> p;
		x = min (x,k);
	        y = max (y,p);	
		v[i] = {k,p};
	}
	for (int i = 0; i < n; i ++){
		P aux = v [i];
		if ( aux.first == x && aux.second ==y)
			return i + 1;
	}
	return -1;
}

auto main () -> int{
	cout << solve () << endl;
	return 0;
}
