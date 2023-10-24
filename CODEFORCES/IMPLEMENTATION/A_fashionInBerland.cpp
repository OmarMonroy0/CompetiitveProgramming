//A. Fashion In Berland
//https://codeforces.com/contest/691/problem/A

#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#define endl "\n"
using std::vector;
using std::string;
using std::cout;
using std::cin;
typedef long long ll;
typedef unsigned long long ull;
const int minutes = 4*60;
ll gauss(ll n){
    return (n*(n+1)/2 );
}
int solve(){
    ll l = 0,i = 0, j= 0, k= 0,n = 0;
    cin>>n;
    if(n == 1){
        cin>>k;
        if(k == 1) return 1;
        else return 0;
    }
    for(; i < n; i++){
        cin>>k;
        if(k == 1) j++;
        else l++;
    }
    return (j == n -1 ? 1 : 0);
}
 
int main (){
    int s = solve();
    cout<<(s == 1 ? "YES": "NO");
    return 0;
}
