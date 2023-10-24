//B. Food Buying
// https://codeforces.com/contest/1296/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int solve(){
    ll n,m;
    double f,f1;
    cin>>n;
    f = (double)n / 9;
    f *= 10;
    m = (int)f;
    if(n % 9 == 0)
     m--;
    return m;
}
int main (){
    ll n;
    cin>>n;
    while(n--){
        cout<<solve()<<endl;
    }
    
    return 0;
}
