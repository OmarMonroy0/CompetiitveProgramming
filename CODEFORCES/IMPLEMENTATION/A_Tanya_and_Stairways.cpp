//A. Tanya and Stairways
// https://codeforces.com/contest/1005/problem/A

#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<ll,ll> P;
 
void solve(){
    ll i,j,k,l,n,m,cont =1;
    std::cin>>n;
    std::vector<ll> v(n),v1;
    for(i = 0; i < n; i ++) std::cin>>v[i];
    for(i = 1; i < n; i ++){
        if(v[i] == 1){
            cont ++;
            v1.push_back(v[i-1]);
        }
    }
    v1.push_back(v[i-1]);
    std::cout<<cont<<endl;
    for(auto l: v1){
        std::cout<<l<<" ";
    }
}
int main (){
    solve();
    return 0;
}
