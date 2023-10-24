//A. Next Round
// https://codeforces.com/contest/158/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int i,n,m,l,j,cont =0;
    cin>>n>>m;
    vector<ll> v(n+1);
    for(i = 1; i <= n; i ++)
        cin>>v[i];
    m = v[m];
    for(i = 1; i <= n; i++){
        if(v[i] >= m && v[i] > 0) cont++;
    }
    return cont;
}
int main() {
    cout<<Solve();
    return 0;
}
