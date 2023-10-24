//A. Police Recruits
// https://codeforces.com/contest/427/problem/A

#include<iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
 
auto solve () -> int{
	int n,sum = 0,k,i,cont = 0,police = 0;
        cin >> n;
	for (i = 0; i < n; i ++){
		cin >> k;
		if ( k == -1){
			if (police > 0)	police --;
			else  cont ++;
		}
		else police += k;
	}
	return cont;
}
auto main () -> int{
	cout << solve ();
	return 0;
}
