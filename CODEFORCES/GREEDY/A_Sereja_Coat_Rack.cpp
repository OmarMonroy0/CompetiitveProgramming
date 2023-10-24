//A. Sereja and Coat Rack
//https://codeforces.com/contest/368/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;
 
auto solve () -> int {
	int n,m,d,i,j,k,l,cont = 0;
	cin >> n >> d;
	vector<int> vec(n,0);
	for (int &x: vec) cin >> x;
	cin >> m;
	sort (vec.begin(),vec.end());
	for (int i = 1; i < vec.size(); i ++)
		vec[i] = vec[i] + vec[i-1];
	if ( m < n) return vec[m-1];
	if ( m == n) return vec[vec.size()-1];
	//m > n
	l = m - n;
	return vec[vec.size()-1] - (l*d);
}
 
auto main () -> int{
	cout << solve (); 
	return 0;
}
