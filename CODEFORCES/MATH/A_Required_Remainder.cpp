//A. Required Remainder
// https://codeforces.com/contest/1374/problem/A

#include<iostream>
using namespace std;
typedef long long ll;
ll solve(){
    ll n, m, k,x,y, great;
    cin>>x>>y>>great;
    if(great < x) return y%x;
    if(great % x == y )return great;
    k = great / x;
    if(k*x + y > great)
        k--;
    return  (k*x+y);
}
int main(){
    ll t; cin>>t;
    while(t--)cout<<solve()<<endl;
    return 0;
}
