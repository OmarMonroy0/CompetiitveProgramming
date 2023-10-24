//A. Presents
// https://codeforces.com/contest/136/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
void Solve(){
    int n,m,l,j;
    cin>>n;
    vector<ll> v(n+1),v1(n+1);
    for(int i = 1; i <= n; i ++){
        cin>>v[i];
    }
    for(int i = 1; i<= n;i++)
        v1[v[i]] = i;
    for(int i= 1; i <= n; i ++)
        cout<<v1[i]<<" ";
}
int main() {
    Solve();
    return 0;
}
