//B. Construct the String
// https://codeforces.com/contest/1335/problem/B

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
using namespace std;
auto solve () -> string {
	int n, j,i,k,l,m,y,x;
	const string abc = "abcdefghijklmnopqrstuvwxyz";
	cin >> n >> k >> l;
	string s(n,abc[0]);
	if (l == 1)
		return s;
	for (j  = 1; j < l; j ++) {
		char a = abc[j];
		for (i = j; i < n; i += l)
			s[i]  = a;
	}
	return s;
}
auto main () -> int{
	int t;
	cin >> t;
	while (t--)
		cout << solve () << endl;
	return 0;
}
