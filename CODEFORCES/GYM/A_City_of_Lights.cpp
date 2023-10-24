//A. City Of Lights
// https://codeforces.com/gym/102465/problem/A
// 2018-2019 ICPC   SouthWestern European Regional Programming Ccontest

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e6+1;
int main (){
    fast;
    ll i,j,k,m,x=0,y,on = 0,off=0,n;
    cin>>k>>m;
    bitset<maxn> b;
    b.set();
    on = k;
    while(m--){
        cin>>n;
        for( i = n; i <= k; i += n){
            if(b[i] == 1){
                b[i] = 0;
                on --;
                off ++;
            }
            else{
                b[i] = 1;
                on ++;
                off--;
            }
        }
        x = max(x,off);
    }
    cout<<x;
    return 0;
}

