//A. Vasya the Hipster
// https://codeforces.com/contest/581/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
 
ll solve(){
    ll n,i,j,x,y,m;
    cin>>n>>m;
    x = min(n,m);
    y = max(n,m);
    n -= x;
    m -= x;
    j = y - x; 
    cout<<x<<" "<< j/2;
}
int main (){
    solve();
    return 0;
}
