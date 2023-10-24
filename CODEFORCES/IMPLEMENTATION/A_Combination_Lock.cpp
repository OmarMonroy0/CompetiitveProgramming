//A. Combination Lock
// https://codeforces.com/contest/540/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(){
	string s, t,u;
	ll i,j,k,x,cont = 0, y,h,h1;
	cin>>k;
	cin>>s>>t;
	if(s == t)
		return 0;
	for(i = 0; i < k; i ++){
		x = s[i] - '0';
		y = t[i] - '0';
		j =  abs(x-y);
		h = max(x,y);
		h1 = min(x,y);
		x = (9-h)+(h1-0) +1;
		cont += min(j,x);
	}
	return cont;
}
int  main (){
 
	cout<<solve();
	return 0;
}
