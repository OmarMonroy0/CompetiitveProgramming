//B. Unlucky Ticket 
// https://codeforces.com/contest/160/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define sz(x)  x.size()
using namespace std;
 
auto solve () -> void{
	int n,m,i,j,k;
	string s;
	cin >> n;
	cin >> s;
	n  = s.length() / 2;
	vector <int> v1, v2;
	for (i = 0; i < n; i ++)
		 v1.push_back(s[i] - '0');
	for (int i = n; i < s.length(); i ++)
		v2.push_back(s[i] -'0');
	sort(all(v1));
	sort(all(v2));
	if (v1[0] > v2[0]){
		for (i = 0; i < n; i ++){
			if(v1[i] <= v2[i])
				break;
		}
		if ( i >= n) cout << "YES";
		else  cout << "NO";
	}
	else if (v1[0] < v2[0]){
		for (i  = 0; i < n; i ++)
			if (v1[i] >= v2[i])
				break;
		if ( i >= n) cout << "YES";
		else cout << "NO";
	}
	else if (v1[0] == v2[0]) cout << "NO";
}
 
auto main () -> int{
	solve ();
	return 0;
}
