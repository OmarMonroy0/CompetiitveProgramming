//B.Disturbed People
// https://codeforces.com/contest/1077/problem/B 

#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int solve(){
    ll n,i,j,cont0 = 0,cont1 = 0;
    map<ll,ll> mm;
    cin>>n;
    vll v(n);
    for(ll i = 0; i < n; i ++){
        cin>>v[i];
        if(v[i] == 0 ) cont0++;
        else cont1++;
    }
    if(cont0 == n || cont1 == n ) return 0;
    for(i = 1; i < n -1; i++){
        if(v[i] == 1 || v[i] == -1) continue;
        if(v[i-1] == 1 && v[i+1] == 1) {
            mm[i-1] ++;
            mm[i+1] ++;
            v[i+1] = -1;
        }
    }
    return mm.size()/2;
}
int main (){
    cout<<solve();
    return 0;
}
