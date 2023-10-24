//A. Shell Game
// https://codeforces.com/contest/35/problem/A

/*PROBLEM SHELL GAME:
 CODEFORCES ROUND #35 DIV2.
https://codeforces.com/problemset/problem/35/A
*/
#include<bits/stdc++.h>
using namespace std;
 
int solve (){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int x,y,k,n;
	vector<int> v(4,0);
	cin >> n;
	v[n] = 1;
	for (int i  = 0; i < 3; i ++){
		cin >> x >> y;
		if ( v[x] == 1 || v[y] == 1){
			v[x] = !v[x];
			v[y] = !v[y];
		}
	}
	for (int i  = 1; i <= 3; i ++)
		if (v[i] == 1)
			return i;
	fclose(stdin);
	fclose (stdout);
	return 0;
}
 
int main (){
	cout << solve ();
	return 0;
}
