//A. In Search of an Easy Problem 
// https://codeforces.com/contest/1030/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int i,n,m,l,j,cont = 0;
    cin>>n;
    for(i = 0; i < n; i ++){
        cin>>l;
        cont += (l == 1? 1: 0);
    }
    return (cont > 0 ? 1: 0);
}
int main() {
    cout<<(Solve() == 1 ? "HARD": "EASY");
    return 0;
}
