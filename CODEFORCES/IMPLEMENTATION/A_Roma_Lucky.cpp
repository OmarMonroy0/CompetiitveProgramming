//A. Roma and Lucky Numbers
//  https://codeforces.com/contest/262/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
	int n, m,i,j,k,l,cont = 0, cont1;
	cin>>n>>m;
	vector<int> v(n,0);
	cont1 = n;
	for(auto &l: v)	cin>>l;
	cont1 = n;
	for(i = 0; i < n; i ++){
		string s = to_string(v[i]);
		cont = 0;
		for(auto k: s){
			if( k == '4' || k == '7')
				cont++;
		}
		if(cont >  m)
			cont1--;
	}
	return cont1;
}

int main (){
	cout<<solve();
	return 0;
}
