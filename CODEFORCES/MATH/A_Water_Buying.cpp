//A. Water Buying
// https://codeforces.com/contest/1118/problem/A

#include<iostream>
#include<algorithm> //max, min
using namespace std;
typedef long long ll;
 
ll solve(ll  l,ll a, ll b){
    if( l == 1) return a;
    ll n =  l *a;
    ll m  = ((l / 2) * b)  + ( l%2 * a);
    return min(n,m);
}
int main (){
    ll t,l,a,b;
    cin>>t;
    while(t--){
        cin>>l>>a>>b;
        cout<<solve(l,a,b)<<endl;
    }
    return 0;
}
