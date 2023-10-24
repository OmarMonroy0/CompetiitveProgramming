//A. Games
// https://codeforces.com/contest/268/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve(){
	int n,m,i,j,k = 0;
	cin>>n;
	vector<int> v(n,0),v1(n,0);
	for(i = 0; i < n; i ++) cin>>v[i]>>v1[i];
	for(i = 0; i < n; i ++){
		for(j =0;j < n; j++)
			if(v[i] == v1[j]) k++;
	}
	return k;
}
 
 
int main (){
	cout<<solve();
	return 0;
}
