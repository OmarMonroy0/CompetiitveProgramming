//A. Two bags of Potatoes
// https://codeforces.com/contest/239/problem/A

#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
auto solve () -> void{
	int m,n,l,i,j,k,x,y;
	cin >> y >> k >> n;
	vector <int> v;
	x = n - y;
	if (  x < 1) cout << -1;
	else{
		bool b = true;
		j = y / k;
		for ( i = k*(j+1); i <= n; i+= k){
			b = false;
			cout << (i - y) << " ";
		}
		if(b) cout << -1;
	}
}
 
 
auto main () -> int{
	solve ();
	return 0;
}
