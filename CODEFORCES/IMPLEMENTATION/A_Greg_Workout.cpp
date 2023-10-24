//A. Greg's Workout
// https://codeforces.com/contest/255/problem/A

#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
#define FOR(i,n)  for(int i = 0; i < (int)n; i ++)
#define FORI(i,k,n,m) for (int i = (int)k; i < (int)n; i += (int)m)
using namespace std;
 
void solve(){
	int n, i, j , k;
	cin>>n;
	vector<int> v(n,0);
	for(auto &l : v) cin>>l;
	int b = 0, chess = 0,ba = 0;
	int  m = 3;
	k = 0;
	FORI(i,k,n,m)
		chess += v[i];
	k = 1;
	FORI(i,k,n,m)
		b  += v[i];
	k = 2;
	FORI(i,k, n, m)
		ba += v[i];
       if(chess > ba &&  chess > b) cout<<"chest";
       else if( ba > chess && ba > b) cout<<"back";
       else if( b > ba && b > chess) cout<<"biceps";
}
int main (){
	solve();
	return 0;
}
