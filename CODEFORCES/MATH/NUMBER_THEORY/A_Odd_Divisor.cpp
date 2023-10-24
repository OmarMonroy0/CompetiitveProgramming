//A. Odd Divisor
// https://codeforces.com/contest/1475/problem/A

#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
typedef long long ll;
auto solve () -> bool{
	ll n,m,i,j,k,l;
	cin >> n;
 	if ( n  & 1) return true;
	for ( i = n; i > 2; i>>= 1){
		if ( (i % 2) & 1) return true;
	}
	return false;
}
 
auto main () -> int{
	int t ;
	cin >> t;
	while (t --)
		cout << ( solve () == true ? "YES" : "NO") << endl;
	return 0;
}
