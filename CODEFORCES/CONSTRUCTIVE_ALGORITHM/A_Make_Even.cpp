//A. Make Even
// https://codeforces.com/contest/1611/problem/A

#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
#define PB push_back
#define all(x)  x.begin(),x.end()
#define  fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> vec2D;
typedef vector<ll> vec;
 
int solve(){
	ll n,i,even,cont = 0;
	string s,s1;
	cin>>s;
	for(i =0; i  < s.length(); i ++)
		if((s[i]-'0') % 2 == 0) cont++;
       if(cont == 0) return -1;	
	
       if(s.length() == 1) return 0;
	if((s[s.length()-1] )% 2 == 0) return 0;	
       if( (s[0] - '0') % 2 == 0) return 1;
       return 2;
 
}
int main (){ fast;
	ll t;
	cin>>t;
	while(t--)
		cout<<solve()<<endl;
	return 0;
}
