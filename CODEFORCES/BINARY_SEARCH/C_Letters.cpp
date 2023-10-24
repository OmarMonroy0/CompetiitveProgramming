//C. Letters
// https://codeforces.com/contest/978/problem/C

#include<iostream>
#include<vector>
#include<ctime>
#include<string>
#include <algorithm>
 
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
void solve(){
    ll m,n,x,y,i,j;
    cin>>n>>m;
    vector<ll> v(n+1), v1(m), v2(n+m+1);
    for(i = 1; i <= n; i++){
        cin>>x;
        v[i] = v[i-1] +x;
    }
    for(i = 0; i < m; i ++)
        cin>>v1[i];
    x = v1.size();
    for(i = 0; i < x; i ++){
        auto l = lower_bound(v.begin(),v.end(),v1[i]);
        m = l - v.begin();
        cout<<m<<"  "<<v1[i] - v[m-1]<<endl;
    }
    
}
int main (){
    solve();
}
