//A. Army
// https://codeforces.com/contest/38/problem/A

#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#define endl "\n"
using std::vector;
using std::string;
using std::cout;
using std::cin;
typedef long long ll;
typedef unsigned long long ull;
const int minutes = 4*60;
ll gauss(ll n){
    return (n*(n+1)/2 );
}
int solve(){
    ll n,i,j,k;
    cin>>n;
    vector<ll> d(n);
    d[0] = 0;
    for(i = 1; i < n; i ++){
        cin>>k;
        d[i] = d[i-1] + k;
    }
    int d1,d2;
    cin>>d1>>d2;
    d1--;
    d2--;
    return d[d2] - d[d1];
    
}
 
int main (){
    cout<<solve();
    return 0;
}
