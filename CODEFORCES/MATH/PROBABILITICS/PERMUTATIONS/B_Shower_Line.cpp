//https://codeforces.com/contest/431/problem/B
// B.Shower Line

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;
 
auto solve() -> ll{
	vector <int> v = {1,2,3,4,5};
	vector < vector <int> > ve (6,vector<int> (6,0));
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			cin >> ve[i][j];
	ll n,m,x,y = -1e7,i;
	do{
		n = 0;
		n += ve[v[0]][v[1]] + ve[v[1]][v[0]] + ve[v[2]][v[3]] + ve[v[3]][v[2]];
		n += ve[v[1]][v[2]] + ve[v[2]][v[1]] + ve[v[3]][v[4]] + ve[v[4]][v[3]];
		n += ve[v[2]][v[3]] + ve[v[3]][v[2]] + ve[v[3]][v[4]] + ve[v[4]][v[3]];
		y = max (y,n);
		
	}while(next_permutation(v.begin(),v.begin() + 5));
	return y;
}
 
auto main () -> int {
	cout << solve();
	return 0;
}
