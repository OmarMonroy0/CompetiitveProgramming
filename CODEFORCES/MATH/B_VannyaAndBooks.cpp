//B. Vanya and Books
// Codeforces Round #308 (Div.2)
//https://codeforces.com/contest/552/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
vector<ll> v ={9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};
int BS(ll t,int l, int r){
    while(l <= r){
        int h = l + (r-l)/2;
        if(t <= v[h]) r = h -1;
        else l = h +1;
    }
    return l;
}
int main (){
    ll n,cont = 0,m,i,j,k;
    cin>>n;
    if(n <= 9){ cout<<n; return 0;} 
    k = BS(n,0,v.size());
    while( k > 0){
        n -= v[k-1];
        cont += n * (k+1);
        k--;
        n = v[k];
    }
    cont += v[0];
    cout<<cont;
    return 0;
}

