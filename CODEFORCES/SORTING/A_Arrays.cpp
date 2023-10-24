// A. Arrays
// https://codeforces.com/contest/572/problem/A

#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
 
bool solve (){
	int n, m, l , k, i, j;
	cin >> n >> m; //size of A and size of B
	vector <int> A (n,0), B (m,0);
	cin >> l >> k; // k numbers from A m from B
	for ( auto &x : A)
		cin >> x;
	for ( auto &y : B)
		cin >> y;
	if ( A [l -1] < B [m-k]) 
		return true;
	return false;
 
}
int main (){
	cout << ( solve () == true ? "YES" : "NO") << endl;
	return 0;
}
