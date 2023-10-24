//A. Yeroslava and Permutations
// https://codeforces.com/contest/296/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#define sz(x) x.size()
using namespace std;
typedef pair<int,int> P;
auto solve () ->void {
	int n,m,i,j,k;
	cin >> n;
	if( n == 1){
		cin >> n;
		cout << "YES" ;
		return ;
	}
	unordered_map <int,int> mp;
	vector <int> freq;
	for (i = 0; i < n; i ++){
		cin >> k;
		mp[k] ++;
	}
	for (auto it =  mp.begin(); it != mp.end(); it++)
		freq.push_back(it->second);
	sort(freq.begin(),freq.end(),[](int x, int y) { return x > y; });
	 k = freq[0];
	for (int i = 1; i < freq.size(); i ++){
		k -= freq[i];
	}
	cout << ( k <= 1 ? "YES" : "NO");
}
 
auto main () -> int {
	solve();
	return 0;
}
