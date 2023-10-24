// A. Bicycle Chain 
// https://codeforces.com/contest/215/problem/A

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<map>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define sz(x)  x.size()
using namespace std;
typedef pair <int,int> P;
auto solve () ->  void{
	int n,m,i,x,y,j,k,l;
	cin >> n;
	vector <int> v(n,0);
	unordered_map<int,int> mp;
	for (i = 0; i < n; i ++)
		cin >> v[i];
	cin >> m;
	vector<int> v1(m,0);
	for (i = 0; i < m; i ++)
		cin >> v1[i];
	for (int i = 0; i < sz(v); i ++){
		for (int  j = 0; j < sz(v1) ; j++){
			if( (v1[j] % v[i] ) == 0)    mp[v1[j]/v[i]] ++;
			//else if ( (v1[j] % v[i]) == 0) mp[v1[j]/v[i]] ++;
		}
	}
	vector <P> aux;
	for (auto it = mp.begin(); it != mp.end(); it++)
		aux.push_back({it->first,it->second});
	sort (all(aux), [] ( P x, P y) { return x.first > y.first; });
	cout << aux[0].second << endl;
}
 
auto main () -> int{
	solve();
	return 0;
}
