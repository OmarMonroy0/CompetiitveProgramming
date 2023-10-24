//https://codeforces.com/contest/977/problem/C

#include<iostream>
#include<vector>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll a,b,c,d,resul,cont;
	vector<ll> v;
	cin>>a>>b;
	v.resize(a+1);
	FOR(i,a){
	 	cin>>c;
		v[i+1] = c;	
	}
	sort(v.begin(),v.end());
	v[0] = v[1]-1;
	ll result = v[b];
	if(b+1 <= a ){
		if(v[b] == v[b+1])
			result = -1;
		else if(v[b] + 1 != v[b+1])
			result++;
	}
	
	if(result == 0)
		result = -1;
	cout<<result;
 
	return 0;
}
