//A. Group of Students
// https://codeforces.com/contest/357/problem/A

/*
 https://codeforces.com/problemset/problem/357/A
 check that you can print any possible answer
*/
#include<bits/stdc++.h>
#define endl '\n'
#define PB(x,y) x.push_back(y)
#define sz(x) x.size()
using namespace std;
	
auto solve () -> int {
	int n,m,i,j,l,cont = 0,p,x,y;
	cin >> n;
	vector<int> vec(n+1,0);
	for (int i = 1; i <= n; i ++)	cin >> vec[i];
	cin >> x >> y;
	for (int i = 1; i <= n; i ++) vec[i] = vec[i] + vec[i-1];
	if (vec[sz(vec)-1] < x) return 0;
	for (i = 1; i <= n; i ++){
		m = vec[i];
		l = vec[n] - vec[i];
		if ( m >= x && m <= y && l >= x &&  l <=  y)
			return i+1;
		if ( m > y )
			break;
	}
	return 0;
}
auto main () -> int {
	//for (int i = 0; i  < 3; i ++)
	cout << solve ();
	return 0;
}
