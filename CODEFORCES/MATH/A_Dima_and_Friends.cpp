//A. Dima and Friends
// https://codeforces.com/contest/272/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int solve(){
	int n=0,m = 0, p = 0, i, j,cont = 5;
	cin >>n;
	for(i =0; i < n; i ++){
		cin>>j;
		m += j;
	}
	p = n +1;
	for( i = 1; i <= 5; i ++)
		if( (m + i ) % p == 1)
			cont--;
	return cont;
}
int main(){
	cout<<solve();
	return 0;
}
