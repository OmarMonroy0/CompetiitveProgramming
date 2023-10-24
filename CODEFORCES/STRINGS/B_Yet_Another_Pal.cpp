//B.  YetAnother Palindrome Problem 
// https://codeforces.com/contest/1324/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
const ll  maxn = 5001;
bool solve(){
    ll n,i,j,k,l;
    cin>>n;
    vector<ll> v(n), v2(maxn,-1);
    map<ll,ll> mp;
    for(i = 0; i <n; i ++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++)
        if(it->second > 2) return true;
    for(i = 0; i < n;i++){
        if(v2[v[i]] != -1)
            if(i  - v2[v[i]] > 1 )
                return true;
        v2[v[i]] = i;
    }
    return false;
}
int main (){
    ll t;
    cin>>t;
    while(t--)
        cout<<(solve() == true ? "YES" : "NO")<<endl;
    
    return 0;
}
