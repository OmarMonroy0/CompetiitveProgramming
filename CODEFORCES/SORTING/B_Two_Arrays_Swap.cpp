//B. Two Arrays and Swaps
// https://codeforces.com/contest/1353/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
 
ll solve(){
    ll n,i,j,x,y,m;
    cin>>n>>m;
    vector<ll> v1(n,0),v2(n,0);
    for(i = 0; i < n; i ++)cin>>v1[i];
    for(i = 0; i < n; i ++) cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    i = 0;
    j = v2.size()-1;
    while(m--){
        if(v1[i] < v2[j]) v1[i] = v2[j];
        else break;
        i++;
        j--;
    }
    int sum = 0;
    for(i =0; i < n; i ++)
        sum += v1[i];
    return sum;
}
int main (){
    ll t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
    return 0;
}
