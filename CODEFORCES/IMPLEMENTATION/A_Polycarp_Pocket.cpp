//A. Polycarp's Pocket 
// https://codeforces.com/contest/1003/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;
int const n = 101;
int maxN = 0;
long long solve(){
    long long l,m,i,j;
    cin>>l;
    vector<int> v(n,0);
    for(i = 0; i < l; i ++){
        cin>>j;
        v[j] ++;
        maxN = max(maxN,v[j]);
    }
    return maxN;
}
int main (){
    cout<<solve();
    return 0;
}
