//A. Shooshuns and Sequence 
// https://codeforces.com/contest/222/problem/A

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
using namespace std;
auto solve () -> void{
	int n,m,i,j,x,y,g,h,k;
	cin >> n >> k;
	vector<int> v(n+1,0);
	for (i = 1; i <= n; i ++)
		cin >> v[i];
	int aux = v[k];
	for (int i = k +1; i <= n; i ++){
		if ( aux != v[i]){
			cout <<  -1;
			return ;
		}
	}
	for (i = k -1; i > 0; i--){
		if ( aux != v[i])
			break;
	}
	cout << i;
 
}
 
auto main () -> int{
	solve ();
	return 0;
}
