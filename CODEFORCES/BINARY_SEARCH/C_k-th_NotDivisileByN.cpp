//C. k-th Not Divisible by N
// Codeforces Round #640 (Div.4)
// https://codeforces.com/contest/1352/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,m,x,y,c,i,j,t,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        c = k;
        ll cont = 0;
        while ( (x = c/n ) >= 1){
            cont += x;
            y = c % n;
            c = x + y;
        }
        cout<<cont + k<<"\n";
    }
    return 0;
}
