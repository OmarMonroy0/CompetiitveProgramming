//B. 01 Games
//https://codeforces.com/contest/1373/problem/B

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define lh(x)  x.length()
#define endl '\n'
using namespace std;
auto solve () -> bool {
	string s,s1;
	int l,k,i,j,m,d,a,x,y = 0;
	cin>> s;
	if ( lh(s) == 1) return false;
	bool b = false;
	while ( lh(s) > 1){		
		b = false;
		for (i = 0, j = 1; j < lh(s);){
			if (s[i] == s[j]){
				i ++;
				j ++;
			}
			else{
				s.erase(s.begin()+i);
				s.erase(s.begin()+i);
				b = true;
				break;
			}
		}
		if(!b){
			break;
		}
		else{
			y++;
		}
	}
	return ( y & 1 );
 
}
auto main () -> int{
	int n;
	cin >> n;
	while (n --)
		cout << (solve () == true ? "DA" : "NET" ) << endl;
	return 0;
}
