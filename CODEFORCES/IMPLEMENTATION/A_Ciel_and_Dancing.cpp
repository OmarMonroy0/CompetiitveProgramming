//A. Ciel and Dancing
// https://codeforces.com/contest/322/problem/A

#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
 
auto solve () -> void{
	int n,m,i,j,k,l,aux,result = 0;
	cin >> n >> m;
	l = max(n,m);
	k = min(n,m);
	cout << l + (k-1) << endl;
	for (int  i = 1; i <= n; i ++)
		cout << i << " 1" << endl;
	for (int i = 2; i <= m; i++)
		cout << "1 " << i << endl;
}
 
auto main () -> int {
	solve ();
	return 0;
}
