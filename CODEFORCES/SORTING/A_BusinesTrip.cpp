// https://codeforces.com/contest/149/problem/A
// A. Business Trip

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int solve(){
    int n,sum = 0,i;
    vector<int> v(12);
    cin>>n;
    for(int i = 0; i < 12; i ++)
        cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(n == 0) return 0;
    for(i = 0; i < 12; i ++){
        sum += v[i];
        if(sum >= n) break;
    }
    if(sum >= n) return i+1;
    else return -1;
}
 
int main (){
    cout<<solve();
    return 0;
}
