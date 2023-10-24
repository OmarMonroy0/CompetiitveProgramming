//A. Hit the Lottery
// https://codeforces.com/contest/996/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
 
typedef long long ll;
 
ll Solve(){
    ll n,m,p,q,cont = 0;
    cin>>n;
    m =  n / 100;
    cont += m;
    n = n - m*100;
    m = n / 20;
    cont += m;
    n = n - m*20;
    m = n  / 10;
    cont += m;
    n = n - m*10;
    m = n / 5;
    cont += m;
    n = n - m*5;
    m = n / 1;
    cont += m;
    return cont;
    
}
 
int main() {
   cout<<Solve();
    return 0;
}
