//A. Square String?
// https://codeforces.com/contest/1619/problem/A

#include<bits/stdc++.h>
#define fi first
#define se second
#define endl '\n'
#define fast_  ios_base::sync_with_stdio(false); cin.tie (0); cout.tie (0);
#define all (x)   x.begin(),x.end()
#define PB(x) push_back (x)
using namespace std;
typedef long long ll;
 
void solve(){
	int i,j,k,l,m;
	string s, s1 = "",s2 = "";
	cin >> s;
	vector<char> vec;
 
	k = s.length();
	if ( k & 1){
		cout << "NO" << endl;
		return ;
	}
	for (i = 0; i < k/2; i ++)
		s1 += s[i];
	for (i = k/2; i < k; i ++)
		s2 += s[i];
	cout << (s1 == s2 ? "YES" :"NO") << endl;
}
 
 
int main (){
	fast_;
	int T;	
	cin >> T;
	while ( T --)
		solve();	
	return 0 ;
}
