// B. Array Stabilization
//  https://codeforces.com/contest/1095/problem/B

#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
 
int solve(){
    int l,m,n,re;
    cin>>n;
    if(n == 2) return 0;
    vector<int> v(n);
    for(int i = 0; i < n; i ++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int t = v.size();
    re = min(v[t-2]-v[0],v[t-1]-v[1]); //if i take off the last n number
    return re;
}
int main (){
    cout<<solve();
    return 0;
}
