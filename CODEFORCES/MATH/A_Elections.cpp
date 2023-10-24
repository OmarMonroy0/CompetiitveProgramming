//A. Elections
// https://codeforces.com/contest/1593/problem/A

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef int64_t  ll;
void solve(){
    ll i,j,k,n,m,x,y;
    cin>>n>>m>>x;
    if(n == m && m == x) cout<<1<<" "<<1<<" "<<1;
    else{
        y = max(n,m);
        y = max(y,x);
        if((y == m && y == n && x != y) || (y== m && y == x && y!=n) || (y == n  && y == x && y!=m)){
            if(y == n) cout<<1<<" ";
            else cout<<y-n+1<<" ";
            if(y == m) cout<<1<<" ";
            else cout<<y-m+1<<" ";
            if(y == x) cout<<1<<" ";
            else cout<<y-x+1;
        }
        else{
            if(y == n) cout<<0<<" ";
            else cout<<y-n+1<<" ";
            if(y == m) cout<<0<<" ";
            else cout<<y-m+1<<" ";
            if(y == x) cout<<0<<" ";
            else cout<<y-x+1;
        }
        
    } 
    cout<<endl;
}
 
int main() {
	ll t;
	cin>>t;
	while(t--) solve();
	
	return 0;
}
