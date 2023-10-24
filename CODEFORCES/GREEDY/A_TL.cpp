//A.TL
// https://codeforces.com/contest/350/problem/A

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
#define all(x) x.begin(),x.end()
using namespace std;
 
auto solve () -> int{
	int n,m,i,j,x,y;
	cin >> n >> m;
	vector <int> v(n,0),v1(m,0);
	for (int i = 0; i < n; i ++)
		cin >> v[i];
	for (int i  = 0; i < m; i ++)
		cin >> v1[i];
	sort(all(v));
	sort(all(v1));
	y = max (v[v.size()-1],v[0]*2);
	if ( v1[0] > y)
		return y;
	else return -1;
}
 
auto main () -> int{
	cout << solve();
	return 0;
}
