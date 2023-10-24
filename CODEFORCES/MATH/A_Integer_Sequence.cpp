//A. Integer Sequence Dividing
// https://codeforces.com/contest/1102/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
 
ll solve(){
    ll n,i,j,x,y,m;
    cin>>n;
     m =   ((n * (n+1)) / 2) % 2;
    return (m == 1 ? true : false);
}
int main (){
    cout<<solve();
    return 0;
}
