//A. Array With Odd Sum
// https://codeforces.com/contest/1296/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
bool solve(){
    ll i,j,k,n,m,odd = 0,even = 0,sum = 0;
    cin>>m;
    for(i = 0; i < m; i ++){
        cin>>k;
        if(k & 1) odd++;
        else even++;
        sum += k;
    }
    if(sum & 1) return true;
    if(odd > 0 && even > 0) return true;
    return false;
}
int main (){
    ll n;
    cin>>n;
    while(n--){
        cout<< (solve() == true ? "YES" : "NO")<<endl;
    }
    
    return 0;
}
