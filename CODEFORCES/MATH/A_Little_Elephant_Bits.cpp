//A. Little Elephant and Bits
// https://codeforces.com/contest/258/problem/A

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
using namespace std;
 
auto solve () -> string{
	string s,s1;
	int cont = 0,i ;
	cin >> s;
	for ( i = 0; i < s.length(); i ++)
		if (s[i] == '0')
			break;
	if (i >= s.length()){
		s.pop_back();
		return s;
	}
	s.erase(s.begin()+i);
	return s;
}
 
auto main () -> int{
	cout << solve () ;
	return 0;
}
