//A. I Wanna Be the Guy
// https://codeforces.com/contest/469/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
bool Solve(){
    ll n,i,m,p,q,cont = 0;
    cin>>n;
    vector<ll> v(n+1,0);
    cin>>p;
    for(i = 1; i  <= p; i ++){
        cin>>q;
        v[q]++;
    }
    cin>>p;
    for(i = 1; i  <= p; i ++){
        cin>>q;
        v[q]++;
    }
    bool band = true;
    for(i = 1; i <= n; i ++){
        if(v[i] == 0){
            band = false;
            break;
        }
    }
    return (band == true? true: false);
}
int main() {
    cout<<(Solve() == true ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}
