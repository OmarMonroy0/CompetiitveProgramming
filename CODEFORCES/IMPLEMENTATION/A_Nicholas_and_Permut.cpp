// A. Nicholas and Permutation
// https://codeforces.com/contest/676/problem/A

/*
https://codeforces.com/problemset/problem/676/A 
Important Note: check in this case you are not being asked to swap
2 adyacent numbers so you can change whatever 2 numbers in the array
and swap them
*/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\0'
#define fi first
#define se second
 
auto solve () -> int{
	int n, j,k,l,i,x,y,pn,p1;
	cin >> n;
	for (i = 0;i < n; i ++){
		cin >> x;
		if ( x == 1)
			p1 = i;
		if ( x == n)
			pn = i;
	}
	int M = max(abs(pn-p1),abs(n-1-p1));
	M = max (M,abs(0-p1));
	M = max (M,abs(0-pn));
	M = max ( M,abs(n-1-pn));
	return M;
}
 
auto main () -> int{
	fast;
	cout << solve ();
	return 0;
}
