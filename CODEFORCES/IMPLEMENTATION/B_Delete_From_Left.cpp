//B. Delete From Left
// https://codeforces.com/contest/1005/problem/B

#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<ll,ll> P;
 
ll solve(){
    ll i,j,l,n,m,cont = 0;
    std::string s,s1,s2;
    std::cin>>s>>s1;
    if(s.compare(s1) == 0 )return 0;
    reverse(s.begin(),s.end());
    reverse(s1.begin(),s1.end());
    while( s.length() > 0 && s1.length()> 0){
        int k = s.length();
        int k1 = s1.length();
        if(k == k1){
            s.pop_back();
            s1.pop_back();
            cont ++;
        }
        else if(k > k1)
            s.pop_back();
        else
            s1.pop_back();
        cont ++;
        if(s.compare(s1) == 0) return cont;
    }
    int k = s.length();
    int k1 = s1.length();
    if( k> 0)  return cont + k;
    if( k1 > 0 ) return cont + k1;
    return cont;
}
int main (){
    std::cout<<solve();
    return 0;
}
