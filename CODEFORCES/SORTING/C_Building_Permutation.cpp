//C. Building Permutation
// https://codeforces.com/contest/285/problem/C

#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
#define fi first
#define se second
 
using namespace std;
auto solve () -> void{
	int n,i,j,k,l,x,y;
	cin >> n;
	vector <int> v(n+1,0);
	for (int i  = 1; i <= n; i ++)
		cin >> v[i];
	if ( n == 1){
		cout << abs(v[0] - 1);
		return ;
	}
	sort(v.begin()+1,v.end());
	long long sum = 0;
	for (int i = 1; i <=n; i ++){
		sum += abs(i - v[i]);
	}
	cout << sum;
}
 
 
auto main () -> int{
	solve ();
	return 0;
}
