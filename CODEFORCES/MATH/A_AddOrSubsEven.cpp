//A. Add Odd or Subsctract Even
// https://codeforces.com/contest/1311/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
int solve(){
    ll i,j,k,n,m;
    cin>>n>>m;
    if(n == m)  return 0;
    if(n > m){
        if( (n -m) % 2 == 0) return 1;
        else return 2;
    }
    if(n < m){
        if( (m-n) %  2 == 0) return 2;
        else return 1;
    }
}
int main (){
    ll n;
    cin>>n;
    while(n--){
        cout<<solve()<<endl;
    }
    
    return 0;
}
