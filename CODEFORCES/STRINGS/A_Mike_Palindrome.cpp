//A.Mike and Palindrome
// https://codeforces.com/contest/798/problem/A

/*PROBLEM A MIKE AND PALINDROME
 *CODEFORCES ROUND #410(DIV.2)
 */
#include<iostream>
#include<vector>
#include <algorithm>
#define all(x) x.begin(),x.end()
#define endl '\n'
using namespace std;
auto solve() ->bool{
	int n, m, j, i,l,cont = 0;
	string s,s1 = "",s2 = "";
	cin >> s;
	n = s.length();
	if (s.length() == 1 ) { return true; }
	s1  = s;
	reverse(all(s1));
	for (auto x = 0; x < s.length(); x++)
		if (s[x] != s1[x])
			cont++;
	if ( n & 1) return (cont/2) <= 1;
	else return (cont/2) == 1;
}
auto main () -> int{
	cout <<  (solve() == true ? "YES" : "NO") << endl;
	return 0;
}
