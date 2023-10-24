//A. Line to Cashier 
// https://codeforces.com/contest/408/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll solve(){
	ll n = 0, m = 0, k = 0, i = 0, j = 0,l = 0;
	cin>>n;
	vector<ll> v(n,0);
	for(i = 0; i < n; i ++)
		cin>>v[i];
	ll mi = 1e9;
	for(i = 0;  i < n; i++){
		k = 0;
		for(j = 0; j  < v[i]; j++){
			cin>>l;
			k += l;
		}
		k *= 5;
		v[i]*= 15;
		k += v[i];
		mi = min(mi,k);
	}
	return mi;
 
}
 
int main (){
	cout<<solve();
	return 0;
}
