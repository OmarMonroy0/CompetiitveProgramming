//B.karen and Coffe
// https://codeforces.com/contest/816/problem/B

#include <bits/stdc++.h>
#define FOR0(i,n) for(int i = 0; i < (int)n; i ++)
#define FOR1(i,n) for(int i = 1; i < (int)n; i++)
#define endl "\n"
#define _io  ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
typedef unsigned long long ll;
const ll  MAX = 2e5 +10;
void solve(){
    ll n = 0,k= 0,q = 0, i = 0, j =  0, cont = 0,t = 0,miN = INT_MAX,maX = 0,first = 0,second = 0;
    vector<ll> num(MAX,0);
    cin>>n>>k>>q;
    while(n--){
        cin>>first>>second;
        miN = min(miN,first); miN = min(miN,second);
        maX = max(maX,first); maX = max (maX,second);
        num[first] ++;
        num[second+1] --;
    }
    for(i = miN; i <= maX+1; i++){
        num[i] = num[i] + num[i-1];
    }
    for(i = miN; i <= maX; i++)
        num[i] = ((num[i] >= k ) ? 1 : 0 );
    for(i = miN; i <= MAX; i++)
        num[i] = num[i] + num[i-1];
    while(q--){
        cin>>first>>second;
        cout<<num[second] - num[first-1]<<endl;
    }
}
 
int main() { _io;
    solve();
    return 0;
}
