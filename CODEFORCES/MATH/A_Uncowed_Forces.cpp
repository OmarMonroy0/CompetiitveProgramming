//A. Uncowed Forces 
//  https://codeforces.com/contest/604/problem/A

#include<bits/stdc++.h>
#define FOR(i,n)  for (int i = 0; i < n; i ++)
#define fi first
#define se second
#define endl '\n'
using namespace std;
 
auto solve () -> int{
	vector<int> time(5,0),wrong(5,0),score = {500,1000,1500,2000,2500};
	int i,j,n = 5;
	int k,l,m,x,y,sum = 0;
	FOR(i,n) cin >> time[i];
	FOR(i,n) cin >> wrong[i];
	cin >> x >> y;
	FOR(i,n) sum += max((3 * score[i] / 10), score[i] - time[i]*score[i] / 250 - 50*wrong[i]);
	return (sum + x*100 - y*50);
}
 
auto main () -> int{
	cout << solve();
	return 0;
}
