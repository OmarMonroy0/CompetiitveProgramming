//A. Currency System in  Geraldion
//  https://codeforces.com/contest/560/problem/A

/*
https://codeforces.com/problemset/problem/560/A
The problem is a bit confusing, basically what you just
have to check if any sum  of the money can be made 
with the banknotes given
as you can see if you receive one baknote with value of 1
then you can make any sum 
but if you do not receive a banknote with value of one
then you will never be able to get as sum "1"
 
*/
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
auto solve () -> int {
	int n,l,j,k;
	cin >> n;
	for (int i  = 0; i < n;  i ++){
		cin >> k;
		if (k == 1) return -1;
	}
	return 1;
}
auto main () -> int{
	cout << solve ();
	return 0;
}
