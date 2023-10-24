// B. Queries about less or equal elements
//Educational Codeforces Round 2
// https://codeforces.com/contest/600/problem/B

#include <bits/stdc++.h>
#define FOR(i,n) for(long long int i = 0; i < (long long int )n; i ++)
using namespace std;
typedef long long int ll;
vector<int> v;
ll UB(ll t,ll l, ll r, bool *band){
    while(l <= r){
        ll h = l + (r-l) / 2;
        if(t ==  v[h]){ l = h + 1; *band = true;} 
        else if( t > v[h]) l = h +1;
        else r = h - 1;
    }
    return ((l >= v.size()) ? -1 : l);
}
 
int main() {
	ll a,b,c,d,n,m,i,j;
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	bool band  = false;
	vector<int> v1;
	cin>>n>>m;
	v.resize(n);
	v1.resize(m);
	FOR(i,n)
	    cin>>v[i];
	 sort(v.begin(),v.end());
	 FOR(i,m){
	     cin>>v1[i];
	     band = false;
	    d =  UB(v1[i], 0, v.size(), &band);
	    if(d == -1)
	        cout<<v.size()<<" ";
	   
	    else if(!d){
	        if(band == true) cout<<1<<" ";
	        else cout<<0<<" ";
	    }
	    else cout<<d<<" ";
	 }
	
	return 0;
}
