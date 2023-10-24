//A. New Year and Hurry
// https://codeforces.com/contest/750/problem/A

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
    ll n,m,i=1  ,j,k,mLeft,cont = 0;
    cin>>n>>m;
    mLeft = minutes-m;
    if(mLeft < 5 ) return 0;
    if(mLeft > (gauss(n)*5) ) return n;
    while(1){
        mLeft -= 5*i;
        if(mLeft <0) break;
        cont++;
        i++;
    }
    return cont;
}
 
int main (){
    cout<<solve();
    return 0;
}
