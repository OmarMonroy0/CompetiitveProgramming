//A. Vitaly and Night
// https://codeforces.com/contest/595/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
auto solve () -> int {
	int n,m,i,j,k,l,x,y = 0;
	cin >> n >> m;
	for (int i  = 0; i < n; i ++){
		for (int j = 0;  j < 2*m; j+=2){
			cin >> k >> l;
			y += ( k || l);
		}
	}
	return y;
 
}
auto main ()-> int {
	cout << solve ();
	return 0;
}
