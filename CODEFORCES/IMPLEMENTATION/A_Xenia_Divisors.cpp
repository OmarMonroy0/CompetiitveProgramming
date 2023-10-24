//A. Xenia and Divisors
// https://codeforces.com/contest/342/problem/A

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
#define sz(x) x.size()
#define endl '\n'
using namespace std;
auto solve () -> void{
	int n,m,i,j,x,y,con = 0;
	cin >> n;
	string s = "";
	unordered_map<int,int > ump;
	for (int i = 0; i < n; i ++){
		cin >> m;
		ump [m] ++;
	}
	y = n / 3;
	bool b = false;
	while (ump[6] > 0 && ump[3] > 0 && ump[1] > 0){
		s+="1 3 6\n";
		ump[6]--;
		ump[3]--;
		ump[1]--;
		b = true;
		con ++;
	}
	while (ump[6] > 0 && ump[2] > 0 && ump[1] > 0){
		s+= "1 2 6\n";
		ump[6]--;
		ump[2]--;
		ump[1]--;
		b = true;
		con ++;
	}
	while (ump[4] > 0 && ump[2] > 0 && ump[1] > 0){
		s+= "1 2 4\n";
		ump[4] --;
		ump[2]--;
		ump[1] --;
		b = true;
		con ++;
	}
	if (con != y)
		cout << -1;
	else {
		s.pop_back();
		cout << s;
	}
	
}
auto main () -> int{
	solve ();
	return 0;
}
