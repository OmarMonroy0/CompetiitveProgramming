//B. Little Girl and Game
// https://codeforces.com/contest/276/problem/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define sz(x)   x.size()
#define se second
using namespace std;
 
auto solve () -> string{
	string s,s1;
	int contI  = 0;
	map <char,int> freq;
	cin >> s;
	for (int i = 0; i < s.length(); i ++)
		freq[s[i]] ++;
	for (auto it = freq.begin(); it != freq.end(); it ++)
		if (it -> se & 1) contI	 ++;
	if (contI & 1 || contI == 0)
		return "First";
	else return "Second";
}
 
auto main () -> int {
	cout << solve();
	return 0;
}
