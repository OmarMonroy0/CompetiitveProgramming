//B. Sail
// https://codeforces.com/contest/298/problem/B

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;
 
auto solve () -> ll {
	ll i,j,x,y,n,m,t,ex,ey,sx,sy,cont = 0;
	string s,s1;
	cin >> t >> ex >> ey >> sx >> sy;
	cin >> s;
	for (i = 0; i < s.length(); i ++){
		if (ex == sx && ey == sy)
			break;
		if (s[i] == 'E' && ex < sx )  //x+1,y
			ex ++;
		else if (s[i] == 'S' &&  ey > sy )   // x,y-1
			ey --;
		else if (s[i] == 'N' &&    ey < sy  ) // x,y+1
			ey ++;
		else if (s[i] == 'W' && ex > sx ) // x-1,y
			ex --;
	}
	if ( i == s.length() && ex == sx && ey == sy)
		return i;
	if (i == s.length () && ( ex != sx || ey != sy))
		return -1;
	return i;	
}
auto main () -> int {
	cout << solve (); 
	return 0;
}
