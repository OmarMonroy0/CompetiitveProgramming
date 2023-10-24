//B. Team Composition: Programmers and Mathematicians
// https://codeforces.com/contest/1611/problem/B

/*REMEMBER THE NAME OF A VARIABLES CANNOT START WITH A NUMBER*/
#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
#define PB push_back
#define all(x)  x.begin(),x.end()
#define  fast std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> ve2D;
typedef vector<ll> ve1D;
 
ll solve(){
	ll i,j,k,l,a,b,m,x,y,z,cont=0;
	cin>>a>>b;
	if(a == 0 || b == 0) return 0;
	if(a > b) swap(a,b);
	return min(a,(a+b)/4);
}
int main (){ fast;
	ll t;
	cin >>t;
	while(t--) cout<<solve()<<endl;
	return 0;
}
