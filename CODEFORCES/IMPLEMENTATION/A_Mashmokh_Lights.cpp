//A. Mashmokh and Lights
// https://codeforces.com/contest/415/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
	int n,m,i,j,k,a,b,c;
	cin>>n>>m;
	vector<int> v(m,0),parents(n,0);
	for(auto &l : v)
		cin>>l;
	for(i = 0; i < v.size(); i ++){
		for(j = n -1; j >= v[i]-1; j--){
			if(parents[j] == 0)
				parents[j] = v[i];
		}
	}
	for(auto k : parents)
		cout<<k<<" ";
 
}
int main(){
	solve();
	return 0;
}
