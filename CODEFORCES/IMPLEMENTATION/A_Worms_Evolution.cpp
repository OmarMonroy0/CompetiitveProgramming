//A. Worms Evolution
// https://codeforces.com/contest/31/problem/A

#include<bits/stdc++.h>
#define endl '\n'
#define PB(x,y)  x.push_back(y)
#define all(x) x.begin(),x.end()
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
auto solve () -> void{
	int n,x,y,z,cont,j,m;
	unordered_set<int> uset;
	cin >> n;
	vector<int> v(n,0),aux;
	for (int i = 0; i < n; i ++) cin >> v[i];
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < n; j ++){
			if (i != j){
			       auto it = find(all(v),v[i] + v[j]);
				if(it != v.end()){
					cout << (it-v.begin() +1)  << " " << i +1  << " " << j +1;
					return ;
				} 
			}
		}
	}
	cout << -1;
}
 
auto main () -> int{
	fast;
	//for (int i = 0; i < 4; i ++)
		solve ();
	return 0;
}
