//A. Circle Line
// https://codeforces.com/contest/278/problem/A

#include<bits/stdc++.h>
#define fi first
#define se second
#define endl '\n'
 
using namespace std;
int solve(){
	int n, m, i, j ,k,l;
	cin>>n;
	vector<int> v(n,0);
	for(auto &l : v)
		cin>>l;
	cin>>k>>l;
	k--;
	l--;
	int cont = 0, cont1 = 0;
	for(i = k; i != l; i = (i + 1) % n)
		cont += v[i];
	for(i = l; i != k; i = (i+1) % n)
		cont1 += v[i];
	return min(cont,cont1);
}
int main(){
	cout<<solve();
	return 0;
}
