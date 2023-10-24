//B. New Year's Number
// https://codeforces.com/contest/1475/problem/B 

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#define endl '\n'
#define sz(x) x.size()
using namespace std;
const int maxn = 1e6+1;
int dp[maxn];
 
auto DP (int n) -> bool{
	if ( n < 0) return false;
	if ( n == 0) return true;
	if (dp[n] != -1) return dp[n];
	bool b =  DP (n-2021);
	bool b1 = DP (n-2020);
	dp[n] = b || b1;
	if ( b || b1 )
		return true;
	return false;
}
 
auto solve () -> bool{
	int n;
	cin >> n;
	bool b =DP (n);
	return b;
}
 
auto main () -> int{
	memset(dp,-1,sizeof(dp));
	int t;
	cin >> t;
	while (t--)
		cout << (solve () == true ? "YES":"NO") <<endl;
	return 0;
}
