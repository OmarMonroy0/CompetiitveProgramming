//A. Vanya and Fence 
// https://codeforces.com/contest/677/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int i,n,m,l,j,cont = 0;
    cin>>n>>m;
    for(int i = 0;  i < n; i ++){
        cin>>l;
        if( l >  m) cont++;
        cont++;
    }
    return cont;
    
}
int main() {
    cout<<Solve();
    return 0;
}
